#include<stdio.h>

int main(){
    int n = 5;
    int num[5];
    for(int i = 0; i<5; i++){
        printf("Enter a 5 digit number sequentially arranging respective digits: ");
        scanf("%d",&num[i]);
    }
    int sum = num[0] + num[1] + num[2] + num[3] + num[4];
    printf("Sum of the digits: %d",sum);
    return 0;
}