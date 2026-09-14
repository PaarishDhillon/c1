#include<stdio.h>

int mystrlen(char str[]){
    int i=0, count;
    char c = str[i];
    while (c!='\0')
    {
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}

void mystrcpy(char target[], char source[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main(){
    char source[] = "Paarish";
    char target[10];
    mystrcpy(target, source);
    printf("%s\n%s",source, target);
    return 0;
}