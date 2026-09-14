#include<stdio.h>

// void star(int n){
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
// }
void star(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < (2*i)-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

int main(){
    int n=10;
    // printf("Enter the value of n: \n");
    // scanf("%d",&n);
    star(n);
    return 0;
}