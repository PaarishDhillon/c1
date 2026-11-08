#include <stdio.h>

int main()
{
    int nums[] = {2,0,2,1,1,0};
    int temp;
    size_t numsSize = sizeof(nums)/sizeof(int);
    printf("numsSize = %d\n",numsSize);
    for(int i=0; i<numsSize; i++){
        for(int j=0; j<numsSize; j++){
            if(nums[j]>nums[i]){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    for(int i=0; i<numsSize; i++){
        printf("%d ",nums[i]);
    }
    return 0;
}