#include<stdio.h>
;
int main(){
    int i = 5;
    printf("%d\n",i); //5
    i+=5;
    printf("%d\n",i); //10
    i++;
    printf("%d\n",i); //11
    printf("%d\n",i++); //11
    printf("%d\n",++i); //13
    printf("%d\n",--i); //12
    return 0;
}