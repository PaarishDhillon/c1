#include<stdio.h>
;
int main(){
    float a;
    printf("Enter your income: \n");
    scanf("%f",&a);
    if (a <= 5.0 && a >= 2.5)
    {
        printf("You need to pay 5 percent tax.\n");
    }
    else if (a <= 10.0 && a >= 5.0)
    {
        printf("You need to pay 20 percent tax.\n");
    }
    else if (a >= 10.0)
    {
        printf("You need to pay 30 percent tax.\n");
    }
    else
        printf("You dont have to pay any tax.");
    
    return 0;
}