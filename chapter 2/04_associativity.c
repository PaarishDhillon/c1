#include<stdio.h>
;
int main(){
    float a = 3;
    float b = 4;
    float c = 5;
    printf("%f\n", a*b/c + 12);
    printf("The value is %f", 5*a*b/5 + 11.4);
    printf("%.1f", 2*a/6*b + 7*c); // associativity of c language
    // 2*a/6*b 35
    // 6/6*b + 35
    // 1*b + 35
    // 4 + 35
    // 39
    return 0;
}