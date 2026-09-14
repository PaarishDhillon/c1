#include<stdio.h>
char* slice(char str[], int m, int n){
    char* ptr1 = &str[m];
    char* ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;

}
int main(){
    char c[] = "Paarish Dhillon";
    int m = 1,n = 6;
    // printf("Enter the value of m: ");
    // scanf("%d",&m);
    // printf("Enter the value of n: ");
    // scanf("%d",&n);
    printf("Sliced string = %s", slice(c,m,n));
    return 0;
}