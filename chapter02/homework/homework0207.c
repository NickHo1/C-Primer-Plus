/*
7.许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
Smile!Smile!Smile!
Smile!Smile!
Smile!
该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。*/
#include <stdio.h>

// smile() 函数，用于打印一次 "Smile!"
void smile(void) {
    printf("Smile!");
}

int mainh0207() {
    // 调用 smile() 函数3次
    smile();
    smile();
    smile();
    printf("\n");

    // 调用 smile() 函数2次
    smile();
    smile();
    printf("\n");

    // 调用 smile() 函数1次
    smile();
    printf("\n");

    return 0;
}