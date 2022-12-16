//通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。
#include <stdio.h>

int mainh0301(void)
{
// 整数上溢
int a = 2147483647;
printf("a = %d\n", a);
a = a + 1;
printf("a = %d\n", a);

Copy code
 // 浮点数上溢
 float b = 3.4e38;
 printf("b = %f\n", b);
 b = b * 10;
 printf("b = %f\n", b);

 // 浮点数下溢
 float c = -3.4e38;
 printf("c = %f\n", c);
 c = c / 10;
 printf("c = %f\n", c);

 return 0;
}