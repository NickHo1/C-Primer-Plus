//在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
//编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
//思考对于该程序，为何使用浮点类型比整数类型更合适？
#include <stdio.h>

int mainh0308(void) {
    double cups;
    double pints, ounces, tablespoons, teaspoons;

    printf("Enter the number of cups: ");
    scanf("%lf", &cups);

    pints = cups / 2.0;
    ounces = cups * 8.0;
    tablespoons = cups * 16.0;
    teaspoons = cups * 48.0;

    printf("%.2f cups is equivalent to:\n", cups);
    printf("%.2f pints\n", pints);
    printf("%.2f ounces\n", ounces);
    printf("%.2f tablespoons\n", tablespoons);
    printf("%.2f teaspoons\n", teaspoons);

    return 0;
}
/*
使用浮点类型比整数类型更合适的原因是，浮点类型能够表示小数值，而整数类型只能表示整数值。
在这个程序中，计算品脱、盎司、汤勺和茶勺的等价容量时，需要使用小数值。
如果使用整数类型，则无法准确地计算出等价容量。
例如，当输入杯数为 0.5 时，品脱数应该是 0.5，但如果使用整数类型，则品脱数会被视为 0。
因此，使用浮点类型能够更准确地计算出等价容量。*/
