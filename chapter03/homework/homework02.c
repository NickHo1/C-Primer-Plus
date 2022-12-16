//编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
#include <stdio.h>

int mainh0302(void) {
    int ascii_code;
    printf("Enter an ASCII code: ");
    scanf("%d", &ascii_code);

    printf("The character for ASCII code %d is %c\n", ascii_code, ascii_code);

    return 0;
}