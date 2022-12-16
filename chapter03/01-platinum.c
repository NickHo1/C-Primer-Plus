#include <stdio.h>
int main0301(void)
{
    //定义体重
     float weight;
     //相等重量的白金价值
     float value;

     printf("你要配铂金吗?\n");
     printf("我们去看看吧.\n");
     printf("请输入你的体重，单位为磅: ");

     //获取用户的输入
     scanf("%f", &weight);
     //假设白金的价格是每盎司$1700
     //14.5833用于把英磅常衡盎司转换为金衡盎司
     value = 1700.0 * weight * 14.5833;
     printf("你体重的铂金价值 $%.2f.\n", value);
     printf("你很值得这样做!如果铂金价格下跌,\n");
     printf("多吃来保持你的价值.\n");

     return 0;
}