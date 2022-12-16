#include "stdio.h"

int main0306() {
    char ch;
    printf("请输入一个char类型字符:");
    scanf("%c", &ch);
    printf("%c对应的ASCII值为%d\n", ch, ch);
    return 0;
}