#include "stdio.h"

void butler(void);

int main0203(void) {
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) //函数定义开始
{
    printf("You rang, sir?\n");
}