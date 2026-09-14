#include<stdio.h>
;
int main(){
    int m[3] = {5,7,8};
    for (int i = 0; i < 3; i++)
    {
        printf("The marks of %d are %d\n",i+1,m[i]);
    }
    
    return 0;
}