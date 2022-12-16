//1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
#include <stdio.h>

int mainh0307(void) {
    double inches;
    double cm;

    printf("Enter your height in inches: ");
    scanf("%lf", &inches);

    cm = inches * 2.54;
    printf("Your height in centimeters is %.2f\n", cm);

    return 0;
}