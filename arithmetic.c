#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int sum = a + b;
    int minus = b - a;
    int multi = a * b;
    int div = b / a;
    int mod = 16 % 3;
    float div2 = 18 / 4.00;
    printf("sum = %d\nminus = %d\nmulti = %d\ndiv = %d\nmod = %d\nfloat_div2 = %.2f", sum, minus, multi, div, mod, div2);
    return 0;
}
