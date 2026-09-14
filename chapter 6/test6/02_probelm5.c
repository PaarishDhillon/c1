#include<stdio.h>
float sum_average(float a, float b){
    printf("The sum of %f and %f is %f\n",a,b,a+b);
    printf("The average of %f and %f is %f\n",a,b,(a+b)/2);
}
int main(){
    float x,y;
    printf("Enter the value of x: \n");
    scanf("%f",&x);
    printf("Enter the value of y: \n");
    scanf("%f",&y);
    sum_average(x,y);
    return 0;
}