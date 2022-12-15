//1．编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。再调用一次printf()函数，把你的名和姓分别打印在两行。
//然后，再调用两次printf()函数，把你的名和姓打印在一行。#include "stdio.h"

#include <stdio.h>

int mainh0201(void) {
    // 第1次打印
    printf("Nick Ho\n");

    // 第2次打印
    printf("Nick\n");
    printf("Ho\n");

    // 第3次和第4次打印
    printf("Nick Ho\n");
    printf("Nick Ho\n");

    return 0;
}