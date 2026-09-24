#include <stdio.h>

int main()
{
    int n = 5;
    for(int rows = 0; rows<=n; rows++){
        if(rows<n){
            for(int j = 0; j<rows; j++){
                printf("%d",rows);
            }
            for(int j = 0; j<(n-rows)*2-1; j++){
                printf(" ");
            }
            for(int j = 0; j<rows; j++){
                printf("%d",rows);
            }
        }
        else{
            for(int j = 0; j<2*rows-1; j++){
                printf("%d",rows);
            }
        }
        printf("\n");
    }
    return 0;
}