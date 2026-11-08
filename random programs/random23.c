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
    int isPalindrom = 1;
    int i , n , x = 1245;
    int count = 0;
    int length  = sizeof(x);
    printf("%d", length);
    int nums1[length];
    int nums2[length];
    for(i=0; i<length; i++){
        n = x % 10;
        x /= 10;
        nums1[i] = n;
    }

    reverse(nums1, 0, length-1);

    printf("\n");
    
    for(i=0; i<length; i++){
        printf("%d",nums1[i]);
    }
    
    printf("\n");
    
    reverse(nums1, 0, length-1);

    for(i=0; i<length; i++){
        printf("%d",nums1[i]);
    }
    
    for(i=0; i<length; i++){
        nums2[i] = nums1[i];
    }

    printf("\n");
    
    for(i=0; i<length; i++){
        printf("%d",nums2[i]);
    }

    reverse(nums1, 0, length-1);

    for(i=0; i<length; i++){
        if(nums1[i]==nums2[i]){
            count++;
        }
        else{
            count--;
        }
    }

    printf("\n");

    if(count == length){
        isPalindrom = 1;
    }
    else{
        isPalindrom = 0;
    }

    printf("%d\n", isPalindrom);

    return 0;
}