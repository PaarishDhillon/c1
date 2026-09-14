#include<stdio.h>

int main(){
    char c[1];
    printf("Enter the word: ");
    // scanf("%s",c);
    gets(c);
    printf("%s",c);
    return 0;
}