/* 
Which of the following is invalid in C?
a. int a=1; int b = a;
b. int v = 3*3;
c. char dt = ‘21 dec 2020’;
*/

// #include<stdio.h>
// ;
// int main(){
//     int v = 3*3;
//     printf("%d",v);
//     return 0;
// }

// #include<stdio.h>
// ;
// int main(){
//     int a = 1;
//     int b = a;
//     printf("%d", b);
//     return 0;
// }

#include<stdio.h>
;
int main(){
    char dt = '21 dec 2020'; // invalid format, cant put more than one letter or character
    printf("%c", dt);
    return 0;
}