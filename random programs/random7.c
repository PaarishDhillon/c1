#include <stdio.h>

int linear_search(int arr[], int n, int target){
    for(int i = 0;  i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] =  {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int index = linear_search(a, n, 5);
    printf("size = %d\n",n);
    printf("index = %d\n",index);
    return 0;
}