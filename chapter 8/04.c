#include<stdio.h>
#include<string.h>

int main(){
    char c[5];
    printf("Enter the string: ");
    gets(c);
    int length = strlen(c);
    printf("%s\n",c);
    for (int i = 0; i < length; i++)
    {
        printf("%c",c[i]);
    }
    
    return 0;
}