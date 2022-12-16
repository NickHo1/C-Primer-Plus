//一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
#include <stdio.h>

int mainh0305(void) {
    int age;
    long seconds;

    printf("Enter your age: ");
    scanf("%d", &age);

    seconds = age * 3.156e7;
    printf("Your age in seconds is %ld\n", seconds);

    return 0;
}