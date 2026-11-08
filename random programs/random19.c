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
    int num = -120;
    int i=0;
    int arr[2000];
    char answer[2000];

    // if(num<0){
    //     num = -1*num;
    //     printf("-");
    // }
    
    
    do{
        arr[i]=num%7;
        num=num/7;
        i++;
    }while(num!=0);
    
    int length = i;
    
    reverse(arr, 0, length-1);

    for(i=0; i<length; i++){
        answer[i] = arr[i] + '0';
    }
    answer[length] = '\0';

    
    if(num<0){
        num = -num;
        for(int i = count; i > 0; i--) {
        result[i] = result[i-1];
    }

        result[0] = '-';
        count++;
    result[count] = '\0';
    }


    for(i=0; i<length; i++){
        printf("%s",answer[i]);
    }
    return 0;
}