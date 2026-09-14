#include<stdio.h>
;
int main(){
    float i = 0;
    while (i<=20)
    {
        if(i>=10){
            printf("The value of i is: %.1f\n",i);
        } 
        i = i+0.5;
    }
    
    return 0;
}