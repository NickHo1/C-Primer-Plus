#include "stdio.h"

//以10进制、8进制、十六进制打印10进制数100
int main0303() {
    int x = 100;
    printf("十进制=%d;八进制=%o;十六进制=%x\n", x, x, x);
    printf("十进制=%d;八进制=%#o;十六进制=%#x\n", x, x, x);//如果要显示0和0x前缀，要在转换语句中加入#
    return 0;
}