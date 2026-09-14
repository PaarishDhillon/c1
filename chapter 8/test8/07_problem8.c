#include<stdio.h>

int main(){
    char c = 'b';
    int count = 0;
    char str[] = "J!bn!Qbbsjti!Eijmmpo";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}