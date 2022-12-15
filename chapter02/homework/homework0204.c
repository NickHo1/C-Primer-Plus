/*
4. 编写一个程序，生成以下输出：
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
除了main()函数以外，该程序还要调用两个自定义函数：一个名为jolly()，
用于打印前3条消息，调用一次打印一条；另一个函数名为deny()，打印最后一条消息。*/
#include <stdio.h>

// 定义jolly()函数，用于打印前3条消息
void jolly(void) {
    printf("For he's a jolly good fellow!\n");
}

// 定义deny()函数，用于打印最后一条消息
void deny(void) {
    printf("Which nobody can deny!\n");
}

int mainh0204(void) {
    // 调用jolly()函数3次
    jolly();
    jolly();
    jolly();

    // 调用deny()函数
    deny();

    return 0;
}