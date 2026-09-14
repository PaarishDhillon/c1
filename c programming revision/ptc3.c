#include<stdio.h>
;
int main(){
    char c;
    printf("Enter the character\n",c);
    scanf("%c",&c);
    printf("The character is: %c\n",c);
    printf("The value of the character is: %d\n",c);
    if(c>='a' && c<='z'){
        printf("The character is lowercase\n");
    }
    else{
        printf("The character is not lowercase\n");
    }
    return 0;
}