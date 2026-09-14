#include<stdio.h>
void change_value(int*x){
    *x = *x * 10;
}
int main(){
    int a=13;
    printf("The value of a is %d\n",a);
    change_value(&a);
    printf("The value of a is %d\n",a);
    return 0;
}