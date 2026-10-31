#include <stdio.h>

int main()
{
    for(;;){
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        printf("%d\n",n);
        printf("Menu: \n");
        printf("1. isPalindrome\n");
        printf("2. largestDigit\n");
        printf("3. encodeNumber\n");
        printf("4. displayWord\n");
        printf("5. findPattern\n");
        printf("6. Exit\n");
        printf("Enter an integer between 1-6\n");
        break;
    }
    return 0;
}