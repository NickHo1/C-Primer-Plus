//6．编写一个程序，创建一个整型变量toes，并将toes设置为10。
//程序中还要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。
#include "stdio.h"

#include <stdio.h>

int mainh0206() {
    // 定义变量toes，并设置为10
    int toes = 10;

    // 计算toes的两倍和toes的平方
    int twice_toes = toes * 2;
    int square_toes = toes * toes;

    // 打印三个值
    printf("toes = %d\n", toes);
    printf("twice_toes = %d\n", twice_toes);
    printf("square_toes = %d\n", square_toes);

    return 0;
}