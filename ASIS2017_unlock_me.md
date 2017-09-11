# Unlock me (Reverse, 116pts)
## Задание
Дан файл, ELF 32-bit LSB executable, MIPS-II version 1.


Запускаем его напрямую с помощью qemu-user-binfmt или qemu-static-mipsel. 

```bash
% ./unlock_me
Enter the unlock code, 10 numbers in the range 1-5
```

Всего есть 9765625 таких комбинаций, поэтому можно просто перебрать их за разумное время (около 6 часов при 550 запусках в секунду).

Выберем более интересный путь и разберём код программы:
![start](start.png)
В начале работы на стеке создаётся два массива: первый состоит из 3 чисел (0x12345, 0xA9867, 0xFEDCB), второй из адресов 5 функций (op1-op5).

После этого программа в цикле считывает с stdin 10 чисел, разделенных переводом строки, и в соответствии с числом вызывается одна из функций op1-op5, изменяющая содержимое всего массива.

Затем получившийся массив сравнивается с числами (0xD7DFEFFF, 0x50A001E9, 0xD68CBE7F), если проверка проходит, то
комбинация считается валидной. Функции op1-op5 целиком состоят из несложных математических операций и разбирать их вручную довольно скучно.
![loop](loop.png)
Декомпилируем их с помощью https://retdec.com/decompilation/, записываем нужные функции в Input File Settings и после пары правок получаем вполне работающий код.
Открываем дебаггер, убеждаемся, что результат работы декомпилированных функций сходится с оригинальными.

Напишем программу для перебора всех возможных комбинаций. Удобнее всего это будет сделать на python, вызывая проверку комбинации через ctypes.

Код проверки:
```c
// gcc -fPIC -shared -ldl -g check.c -o check.so
int check_combination(char * combination)
{
    int32_t a[3] = {0x12345, 0xA9867, 0xFEDCB};
    for (int i = 0; i < 10; i++)
    {
        switch(combination[i])
        {
            case '1':
                op1(a);
                break;
            case '2':
                op2(a);
                break;
            case '3':
                op3(a);
                break;
            case '4':
                op4(a);
                break;
            case '5':
                op5(a);
                break;
        }
        // printf("c: %c %x %x %x\n", combination[i], a[0], a[1], a[2]);
    }
    if (a[0] == 0xD7DFEFFF && a[1] == 0x50A001E9 && a[2] == 0xD68CBE7F)
        return 1;
    else
        return 0;
}
```

Код брутфорсера:
```python
#!/usr/bin/python
#-*- coding:utf-8 -*-

import ctypes
import itertools
import numpy
import os
import threading

def bruteforce(checklist):
    lib = ctypes.CDLL("./check.so")
    for el in checklist:
        if lib.check_combination(ctypes.c_char_p(el)):
            print("Flag found: ASIS{{{}}}".format(el))
            os._exit(0)

if __name__ == "__main__":
    print("Generating combinations")
    combis = [''.join(map(str, combination)) for combination in itertools.product(range(1,6), repeat=10)]
    print("Staring threads")
    threads = []
    for chunk in numpy.array_split(numpy.array(combis), 8):
        t = threading.Thread(target=bruteforce, args=(chunk,))
        threads.append(t)
        t.start()
    for t in threads:
        t.join()

```

Результат работы:
```bash
% time python bruteforce.py
Generating combinations
Staring threads
Flag found: ASIS{2131441154}
python bruteforce.py  32.56s user 15.53s system 207% cpu 23.129 total
```
