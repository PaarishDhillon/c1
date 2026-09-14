#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    // int a[]={1,2,3,4,5,6,7,8,9,10};
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i]= n*(i+1);
    }
    
    // int* ptr = &a;
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d is %d\n",n,i+1,a[i]);
        // ptr++;
    }
    
    return 0;
}