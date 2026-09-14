#include<stdio.h>
;
int main(){
    int a,b;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    int c = a + b;
    printf("The value of a is %d, value of b is %d, and sum is %d\n",a,b,c);
    printf("Remainder when %d is divided by %d is %d and quotient is %d",a,b,a%b,a/b);
    return 0;
}

// %.2f means output will have digits upto 2 decimal places

// #include<stdio.h>
// #include<math.h>

// int main() {
//     float a, b;

//     printf("Enter value of a\n");
//     scanf("%f", &a);

//     printf("Enter value of b\n");
//     scanf("%f", &b);

//     float c = a + b;

//     printf("The value of a is %.2f, value of b is %.2f, and sum is %.2f\n",
//            a, b, c);

//     printf("Remainder when %.2f is divided by %.2f is %.2f and quotient is %.2f",
//            a, b, fmod(a, b), a / b);
//            
//     return 0;
// }