#include<stdio.h>
#include<string.h>

int main(){
    char s[]="Hello";
    char c[]="Paarish";
    char a[]="Dhillon";
    printf("%d\n",strlen(c));
    strcat(s,c);
    printf("%s\n",s);
    strcat(s,a);
    printf("%s\n",s);
    return 0;
}