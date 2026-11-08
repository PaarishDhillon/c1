#include <stdio.h>

void reverse(int nums[], int start, int end){
    while(start<end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    

    return 0;
}