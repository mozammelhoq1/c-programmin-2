#include <stdio.h>

int main()
{
    int usd;
    scanf("%d", &usd);
    if(usd >= 100)
    {
        printf("You have %d dollars, you can buy a car.", usd);
    }
    else if(usd >= 50)
    {
        printf("You have %d dollars, you can buy a bike.", usd);
    }
    else if(usd >= 20)
    {
        printf("You have %d dollars, you can buy a by-cycle.", usd);
    }
    else
    {
        printf("You have %d dollars, you can not buy anything.", usd);
    }
    return 0;
}