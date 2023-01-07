#include <stdio.h>
#include <string.h>
#include<stdlib.h>

//使用不同类型的字符串
#define PRAISE "You are an extraordinary being."

int main0402(void) {
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);//一个打印输入的字符串，一个打印字符串预处理

    return 0;
}