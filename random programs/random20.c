// void reverse(int nums[], int start, int end){
//     while(start<end){
//         int temp = nums[start];
//         nums[start] = nums[end];
//         nums[end] = temp;
//         start++;
//         end--;
//     }
// }

char* convertToBase7(int num) {
    int i=0;
    int arr[2000];
    // char answer[2000];
    static char result[50];
    
    if(num<0){
        num = -num;
        printf("-");
    }
    
    do{
        arr[i]=num%7;
        num=num/7;
        i++;
    }while(num!=0);
    
    int length = i;
    
    // reverse(arr, 0, length-1);
    
    // if(num<0){
    // result[length] = '-';
    //     printf("-");
    // }
    
    // else
    // {
    //     result[length] = '\0';
    // }
    
    for(int i = 0; i < length; i++) {
        result[i] = arr[length-i-1] + '0';
    }   

    result[length] = '\0';

    return result;
}