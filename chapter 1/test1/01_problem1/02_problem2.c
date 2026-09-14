/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/
// #include<stdio.h>
// ;
// int main(){
//     int r = 4;
//     int h = 3;
//     float p = 3.14;
//     printf("Volume of the cylinder with radius %d and height %d = %f",r,h, p*r*r*h);
//     printf("\nArea of circle with radius %d = %f",r, p*r*r);
//     return 0;
// }
#include<stdio.h>
;
int main(){
    int r,h;
    float p = 3.14;
    printf("Enter the radius:\n");
    scanf("%d", &r);
    printf("Enter the height:\n");
    scanf("%d", &h);
    printf("Volume of the cylinder with radius %d and height %d = %f",r,h, p*r*r*h);
    printf("\nArea of circle with radius %d = %f",r, p*r*r);
    return 0;
}