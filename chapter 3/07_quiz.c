// #include<stdio.h>
// ;
// int main(){
//     int a;
//     printf("Enter your marks: \n");
//     scanf("%d", &a);
//     if (a<=100 && a>=90){
//         printf("Your grade is A");
//     }
//     else if (a<=90 && a>=80)
//     {
//         printf("Your grade is B");
//     }
//     else if (a<=80 && a>=70)
//     {
//         printf("Your grade is C");
//     }
//     else if (a<=70 && a>=60)
//     {
//         printf("Your grade is D");
//     }
//     else if (a<=60 && a>=50)
//     {
//         printf("Your grade is E");
//     }
//     else{
//         printf("Your grade is F");
//     }
//     return 0;
// }

#include<stdio.h>

    int main(){
    int a;
    printf("Enter your marks: \n");
    scanf("%d", &a);
    char c;
    if (a<=100 && a>=90){
        c='A';
    }
    else if (a<=90 && a>=80)
    {
        c='B';
    }
    else if (a<=90 && a>=80)
    {
        c='C';
    }
    else if (a<=90 && a>=80)
    {
        c='D';
    }
    else if (a<=90 && a>=80)
    {
        c='E';
    }
    printf("Grade: %c",c);
    return 0;
    }
