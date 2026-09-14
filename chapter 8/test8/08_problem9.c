#include<stdio.h>

int main(){
    char c;
    printf("Enter the character you want to check: ");
    scanf("%c",&c);
    int count = 0;
    char str[] = "J!bn!Qbbsjti!Eijmmpo";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
        
    }
    if (count>0)
    {
        printf("The character %c is present %d times\n",c,count);
    }
    else{
        printf("The character %c is not present",c);
    }
    return 0;
}