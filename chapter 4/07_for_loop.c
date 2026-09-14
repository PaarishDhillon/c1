#include<stdio.h>
;
int main(){
    int n=8;
    // printf("Enter the value of n: ");
    // scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i==6){
            // break; //exit the loop
            continue; //skip the curent iteration
        }
        printf("%d\n",i);
    }
    return 0;
}