#include<stdio.h>
float average(float a, float b, float c ){
    printf("The average of %f, %f and %f is %f.",a,b,c,(a+b+c)/3);
}
int main(){
    float a,b,c;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    average(a,b,c);
    return 0;
}