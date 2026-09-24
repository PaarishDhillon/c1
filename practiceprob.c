#include <stdio.h>

int main()
{
    int n = 5;
    // printf("Enter n: ");
    // scanf("%d",&n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            printf("_");
        }
        for(int j = n-i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}