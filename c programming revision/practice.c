#include<stdio.h>
;
int main(){
    int a, b, c;
    printf("Marks in Physics: ",a);
    scanf("%d",&a);
    printf("Marks in Chemistry: ",b);
    scanf("%d",&b);
    printf("Marks in Mathematics: ",c);
    scanf("%d",&c);
    if((a+b+c)/3>=40 && (a>=33) && (b>=33) && (c>=33)){
        printf("Cogratulations! You have passed the exam.");
    }
    else{
        printf("Sorry! You have failed.");
    }
    return 0;
}