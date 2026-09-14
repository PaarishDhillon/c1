#include<stdio.h>
int x(int n){
    if(n==1){
        return 1;
    }
    return x(n-1) + n;
}
int main(){
    int a=10;
    printf("%d",x(a));
    return 0;
}