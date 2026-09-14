#include<stdio.h>

int count(int arr[], int n){
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            number++;
        }
        
    }
    return number;
}

int main(){
    int a[]={1,-2,3,-4,5,6,-7,8,9,10};
    printf("Number of positive integers is %d\n",count(a,10));
    return 0;
}