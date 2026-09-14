/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

// #include<stdio.h>

// int main(){
//     int p = 12000;
//     int r = 5;
//     int t = 3;
//     printf("SI = %d", (p*r*t)/100);
//     return 0;
// }

#include<stdio.h>

int main(){
    float p,r,t;
    printf("Enter principal amount:\n");
    scanf("%f", &p);
    printf("Enter rate of interest in percent:\n");
    scanf("%f", &r);
    printf("Enter time in years:\n");
    scanf("%f", &t);
    printf("SI = %f", p*r*t/100.0);
    return 0;
}