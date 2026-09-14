#include<stdio.h>
;
int main(){
    int n=8;
    int sum=0;
    for(int i=1; i<=10; i++){
        // i*n;
        sum+=(i*n);
    }
    printf("%d\n",sum);
    return 0;
}