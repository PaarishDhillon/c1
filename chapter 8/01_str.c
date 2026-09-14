#include<stdio.h>
#include <string.h>

int main(){
    char* ptr = "Hello";
    printf("%s\n",ptr);
    printf("%d\n",strlen(ptr));
    ptr = "Paarish";
    printf("%s\n",ptr);
    printf("%d\n",strlen(ptr));
    return 0;
}