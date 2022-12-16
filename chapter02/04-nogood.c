#include "stdio.h"

int main0204() {//(括号错误
    //int n, int n2,int n3;/err
    int n, n2, n3;//OK

    n = 5;//ok
    n2 = n * n;//ok
    //n3 = n2 * n2;//没有语法错误，但是逻辑错误，因为是求n的3次方
    n3 = n * n * n;//ok
    //printf("n = %d,n squared = %d,n cubed = %d\n", n, n2, n3)//err 没有加;
    printf("n = %d,n squared = %d,n cubed = %d\n", n, n2, n3);

    return 0;
}
//)
