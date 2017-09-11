#include <stdint.h>
#include <stdio.h>

int32_t op1(int32_t arr[3]) {
    int32_t v1; // 0x400874
    int32_t v2; // 0x400888
    uint32_t v3; // 0x4008a4
    uint32_t v4; // 0x4008c0
    int32_t v5; // 0x4008dc
    int32_t v6; // 0x4008f8
    int32_t v7; // 0x40090c
    int32_t v8; // 0x400928
    int32_t v9; // 0x400944
    uint32_t v10; // 0x400960
    int32_t * v11; // 0x400888_0
    int32_t * v12; // 0x4008c0_0
    int32_t result; // 0x40096c
    int32_t v13;
    int32_t v14; // bp-8
    int32_t v15;
    int32_t v16;
    int32_t * v17;
    // 0x400860
    v14 = v15;
    v17 = (int32_t *)arr;
    v1 = *arr;
    *arr = -1 - v1;
    v11 = &arr[2]; // arg2
    v2 = *v11;
    *v11 = v2 | -0x70290a2c;
    v3 = *arr;
    *arr = v3 / 1024 | v3 * 0x400000;
    v12 = &arr[1];
    v4 = *v12;
    *v12 = v4 / 16 | v4 * 0x10000000;
    v5 = *v12;
    *v12 = v5 ^ 0x30be77f2;
    v6 = *v11;
    *v11 = -1 - v6;
    v7 = *v11;
    *v11 = v7 & -0xa5b3f9f;
    v8 = *v11;
    *v11 = v8 & 0x259a904c;
    v9 = *v11;
    *v11 = v9 ^ -0x65ef683c;
    v10 = *arr;
    result = v10 * 256 | v10 / 0x1000000;
    *arr = result;
    return result;
}

int32_t op2(int32_t  arr[3]) {
    int32_t v1; // 0x4009a4
    int32_t v2; // 0x4009c0
    int32_t v3; // 0x4009dc
    uint32_t v4; // 0x4009f0
    int32_t v5; // 0x400a0c
    int32_t v6; // 0x400a28
    int32_t v7; // 0x400a44
    int32_t v8; // 0x400a60
    uint32_t v9; // 0x400a7c
    int32_t v10; // 0x400a98
    int32_t * v11; // 0x4009a4_0
    int32_t * v12; // 0x4009c0_0
    int32_t v13;
    int32_t v14; // bp-8
    int32_t v15;
    int32_t v16;
    int32_t result=arr[0];
    // 0x400990
    v14 = v15;
    v11 = &arr[2];
    v1 = *v11;
    *v11 = v1 + -0x4a746a08;
    v12 = &arr[1];
    v2 = *v12;
    *v12 = v2 | 0x4a61f1ce;
    v3 = *v11;
    *v11 = -1 - v3;
    v4 = *arr;
    *arr = v4 / 32 | v4 * 0x8000000;
    v5 = *v12;
    *v12 = v5 | -0x20f8da3d;
    v6 = *v12;
    *v12 = v6 + 0x35a19cfd;
    v7 = *v11;
    *v11 = v7 + -0x13c5ed1a;
    v8 = *arr;
    *arr = v8 + 0x49d48c03;
    v9 = *v12;
    *v12 = v9 / 256 | v9 * 0x1000000;
    v10 = *arr;
    *arr = -1 - v10;
    return result;
}

int32_t op3(int32_t a1[3]) {
    int32_t v1; // 0x400ad4
    int32_t v2; // 0x400ae8
    int32_t v3; // 0x400b04
    int32_t v4; // 0x400b20
    uint32_t v5; // 0x400b3c
    int32_t v6; // 0x400b58
    uint32_t v7; // 0x400b74
    int32_t v8; // 0x400b90
    int32_t v9; // 0x400bac
    uint32_t v10; // 0x400bc0
    int32_t * v11; // 0x400ae8_0
    int32_t * v12; // 0x400b58_0
    int32_t result; // 0x400bcc
    int32_t v13;
    int32_t v14; // bp-8
    int32_t v15;
    int32_t v16;
    int32_t v17;
    // 0x400ac0
    v14 = v15;
    v1 = *a1;
    *a1 = -1 - v1;
    v11 = &a1[1];
    v2 = *v11;
    *v11 = v2 + -0x9cf7994;
    v3 = *a1;
    *a1 = v3 + -0x795a6fb6;
    v4 = *a1;
    *a1 = v4 + -0x239f4683;
    v5 = *v11;
    *v11 = v5 * 0x8000 | v5 / 0x20000;
    v12 = &a1[2];
    v6 = *v12;
    *v12 = v6 ^ -0x598c70ba;
    v7 = *v12;
    *v12 = v7 * 0x8000 | v7 / 0x20000;
    v8 = *v11;
    *v11 = v8 + 0x28f369d9;
    v9 = *v12;
    *v12 = -1 - v9;
    v10 = *v12;
    result = v10 / 0x1000 | v10 * 0x100000;
    *v12 = result;
    return result;
}

int32_t op4(int32_t a1[3]) {
    int32_t v1; // 0x400c04
    uint32_t v2; // 0x400c20
    uint32_t v3; // 0x400c3c
    int32_t v4; // 0x400c58
    uint32_t v5; // 0x400c74
    uint32_t v6; // 0x400c90
    int32_t v7; // 0x400cac
    int32_t v8; // 0x400cc8
    int32_t v9; // 0x400ce4
    int32_t v10; // 0x400cf8
    int32_t * v11; // 0x400c04_0
    int32_t * v12; // 0x400cc8_0
    int32_t v13;
    int32_t v14; // bp-8
    int32_t v15;
    int32_t v16;
    int32_t result = 0;
    // 0x400bf0
    v14 = v15;
    v11 = &a1[1];
    v1 = *v11;
    *v11 = v1 + 0x66a0f372;
    v2 = *v11;
    *v11 = v2 / 64 | v2 * 0x4000000;
    v3 = *v11;
    *v11 = v3 * 0x4000 | v3 / 0x40000;
    v4 = *a1;
    *a1 = v4 | 0x57d6409d;
    v5 = *v11;
    *v11 = v5 / 32 | v5 * 0x8000000;
    v6 = *v11;
    *v11 = v6 / 1024 | v6 * 0x400000;
    v7 = *v11;
    *v11 = v7 & -0x6a81a649;
    v12 = &a1[2];
    v8 = *v12;
    *v12 = v8 & -0x5688347b;
    v9 = *v12;
    *v12 = -1 - v9;
    v10 = *v11;
    *v11 = v10 ^ -0x2f25be37;
    return result;
}

// Address range: 0x400d28 - 0x400e4f
int32_t op5(int32_t a1[3]) {
    int32_t v1; // 0x400d3c
    int32_t v2; // 0x400d50
    int32_t v3; // 0x400d6c
    uint32_t v4; // 0x400d88
    uint32_t v5; // 0x400da4
    uint32_t v6; // 0x400dc0
    int32_t v7; // 0x400ddc
    int32_t v8; // 0x400df8
    int32_t v9; // 0x400e0c
    int32_t v10; // 0x400e20
    int32_t * v11; // 0x400d3c_0
    int32_t * v12; // 0x400d88_0
    int32_t v13;
    int32_t v14; // bp-8
    int32_t v15;
    int32_t v16;
    int32_t result;
    // 0x400d28
    v14 = v15;
    result = 0;
    v11 = &a1[1];
    v1 = *v11;
    *v11 = -1 - v1;
    v2 = *a1;
    *a1 = v2 & 0x39de8af2;
    v3 = *a1;
    *a1 = v3 | -0x3cea78bc;
    v12 = &a1[2];
    v4 = *v12;
    *v12 = v4 * 8 | v4 / 0x20000000;
    v5 = *v11;
    *v11 = v5 / 0x4000 | v5 * 0x40000;
    v6 = *v11;
    *v11 = v6 / 64 | v6 * 0x4000000;
    v7 = *a1;
    *a1 = v7 | 0x5003210a;
    v8 = *v12;
    *v12 = -1 - v8;
    v9 = *v11;
    *v11 = -1 - v9;
    v10 = *v11;
    *v11 = v10 ^ 0x5a8ed70;
    return result;
}

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
