#include<stdio.h>
;
int main(){
    float a;
    printf("Enter your monthly income in lakhs: ",a);
    scanf("%f",&a);
    if(a>=2.5 && a<5.0){
        printf("You have to give 5%% of your income as tax\n");
    }
    if(a>=5.0 && a<10.0){
        printf("You have to give 20%% of your income as tax\n");
    }
    if(a>=10.0){
        printf("You have to give 30%% of your income as tax\n");
    }
    if(a<2.5){
        printf("You do not have to pay any tax\n");
    }
    return 0;
}