#include<stdio.h>
;
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){    // age greater than or equal to 18
        printf("You are an adult\n");
        printf("You are an eligible driver\n");
        printf("You are an eligible voter\n");
    }
    else{
        printf("You are not an adult");
    }
    
    return 0;
}
// (!=) is used for not equal to
// (==) is used for equal to