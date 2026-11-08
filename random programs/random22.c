#include <stdio.h>

int main()
{
    int nums[]  = {3,2,4};
    int target = 6;
    size_t length = sizeof(nums)/sizeof(nums[0]);
    int index1, index2;
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            if(nums[i] + nums[j] == target){
                index1 = j;
                index2 = i;
            }
        }
    }
    printf("index1 = %d , index2 = %d", index1, index2);
    return 0;
}