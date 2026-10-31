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
    int nums[] = {1,2,3,4,5,6,7};
    int arr[0];
    int k = 3;
    size_t numsSize = sizeof(nums) / sizeof(arr[0]);
    k = k%numsSize;
    printf("%d\n",numsSize);
    reverse(nums, 0, numsSize-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, numsSize-1);
    for(int i=0; i<numsSize; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}