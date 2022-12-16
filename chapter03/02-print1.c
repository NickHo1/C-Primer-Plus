#include "stdio.h"

int main0302() {
    int ten = 10;
    int two = 2;
    printf("正确方式: ");
    printf("%d 减 %d 等于 %d\n", ten, two, ten - two);
    printf("错误方式: ");
    printf("%d 减 %d 等于 %d\n", ten);  // 遗漏2个参数
    return 0;
}
