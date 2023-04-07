#include <stdio.h>

int main ()

{
    int usd;
    scanf("%d", &usd);
    if(usd){
        printf("You have $%d money\n", usd);
        if(usd >= 7000){
        printf("You can go to China with honey.\n");
        if(usd >= 8000){
            printf("You can go to Japan with honey.\n");
            if(usd >= 15000){
                printf("You can go to Canada with honey.\n");
            }else if(usd >= 30000 ){
                printf("You can go to America with honey.\n");
            }else{
                printf("You  can't go anywhere with this dollar, you go home with your honey\n");
            }
        }else{
            printf("You can't go anywhere with this dollar, you go home with your honey\n");
        }
    }else{
        printf("You can't go anywhere with this dollar, you go home and say sorry your honey\n");
    }
    }
    else
    {
        printf(" No money, no honey.");
    }
}