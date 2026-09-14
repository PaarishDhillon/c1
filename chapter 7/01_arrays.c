#include<stdio.h>

int main(){
    int marks[]={12,13,14};
    for (int i = 0; i < 3; i++)
    {
        printf("The marks are %d\n",marks[i]);  
    }
    // marks[0]=71;
    // marks[1]=86;
    // marks[2]=92;
    // printf("The marks are %d %d %d",marks[0],marks[1],marks[2]);
    return 0;
}