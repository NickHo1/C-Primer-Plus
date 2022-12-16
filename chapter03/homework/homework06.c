//1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。
//编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
#include <stdio.h>

int mainh0306(void)
{
double quarts;
long molecules;

 printf("Enter the number of quarts of water: ");
 scanf("%lf", &quarts);

 molecules = quarts / (3.0e-23 / 950.0);
 printf("The number of water molecules is %ld\n", molecules);

 return 0;
}