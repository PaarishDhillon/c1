#include<stdio.h>

int main(){
    int a[3][10];
    int mul[3];
    for (int k = 0; k < 3; k++)
    {
        printf("Enter the value: \n");
        scanf("%d",&mul[k]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j]= mul[i]*(j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Value = %d\n",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}