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
