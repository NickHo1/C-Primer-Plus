#include "stdio.h"

int main0101(void) {
    //声明一个名为dogs的变量
    int dogs;
    //输出语句
    printf("How many dogs do you have?\n");
    //从键盘中获取输入，并存入变量
    scanf("%d", &dogs);
    //%d是占位符，可以在输出的字符串中加入变量
    printf("So you have %d dog(s)!\n", dogs);
    return 0;
}

