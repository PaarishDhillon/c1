#include<stdio.h>

int sum(int x, int y){
    printf("The sum of %d and %d is %d.\n", x, y, x+y);
    return x+y;
}
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    sum(a,b);
    sum(4,5);
    return 0;
}