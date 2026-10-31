#include<stdio.h>

int main(){
    int n=10, i, x,primeStatus=1, j;
    // printf("Enter the value of n: ");
    // scanf("%d", &n);
    for(j=2; j<=n; j++){
        for(i=2; i<j; i++){
            if(j%i==0){
                primeStatus=0;
                break;
            }
            else{
                primeStatus=1;
            }
        }
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(x = 0; x<j; x++){
            x=j;
            if(primeStatus == 1){
                printf("%d", x);
            }
        }
        printf("\n");
    }
}