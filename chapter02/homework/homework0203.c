//编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。
#include <stdio.h>

int mainh0203(void) {
    // 定义年龄和天数的变量
    int age, days;

    // 计算天数
    age = 25;
    days = age * 365;

    // 打印年龄和天数
    printf("My age is %d and my age in days is %d.\n", age, days);

    return 0;
}