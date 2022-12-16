//编写一个程序，发出一声警报，然后打印下面的文本：
//Startled by the sudden sound, Sally shouted,
//"By the Great Pumpkin, what was that!"
#include <stdio.h>

int mainh0303(void)
{
printf("\aStartled by the sudden sound, Sally shouted,\n");//使用转义序列 \a
printf("By the Great Pumpkin, what was that!\n");
 return 0;
}