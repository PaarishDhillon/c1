#include<stdio.h>
;
int main(){
    int i=1;
    int sum=0;
    do
    {
        printf("");
        sum+=i;
        i++;
    }while (i<=10);
    printf("%d\n",sum);
    return 0;
}