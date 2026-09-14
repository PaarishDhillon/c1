#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter marks in s1: \n");
    scanf("%d", &a);
    printf("Enter marks in s2: \n");
    scanf("%d", &b);
    printf("Enter marks in s3: \n");
    scanf("%d", &c);
    char p;
    printf("are total marks for each subject same? Enter 'Y' or 'N' \n");
    scanf(" %c", &p);
    if (p == 'Y' || p == 'y')
    {
        int w;
        printf("Enter maximum marks: \n");
        scanf("%d",&w);
        if ((a*100)/w>=33 && (b*100)/w>=33 && (c*100)/w>=33 && ((a+b+c)*100)/(3*w)>=40)
        {
            printf("Congrts! You have passed.\n");
        }
        else{
            printf("Sorry! You failed.\n");
        }

    }
    else{
        int x,y,z;
        printf("Enter max marks for s1: \n");
        scanf("%d",&x);
        printf("Enter max marks for s2: \n");
        scanf("%d",&y);
        printf("Enter max marks for s3: \n");
        scanf("%d",&z);
        if 
        ((a*100)/x >= 33 && 
        (b*100)/y >= 33 &&
        (c*100)/z >= 33 &&
        ((a+b+c)*100)/(x+y+z) >= 40)
        {
            printf("Congrts! You have passed.\n");
        }
        else{
            printf("Sorry! You failed.\n");
        }
    }

    return 0;
}
