#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i = n; i>=0; i--){
        for(int j = i; j>0; j--){
            printf("%d",i);
        }
        printf("\n");
    }
}