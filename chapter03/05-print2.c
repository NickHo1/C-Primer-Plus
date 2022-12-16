#include <stdio.h>

int main0305(void) {
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    //unsigned类型输出用%u
    printf("un = %u and not %d\n", un, un);
    //short类型输出用%hd和%d
    printf("end = %hd and %d\n", end, end);
    //long类型输出用%ld而不是%hd
    printf("big = %ld and not %hd\n", big, big);
    //long long类型输出用%lld而不是%ld
    printf("verybig= %lld and not %ld\n", verybig, verybig);

    return 0;
}