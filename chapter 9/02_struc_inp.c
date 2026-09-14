#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    char name[10];
    float salary;
};
int main(){
    struct employee e1;
    printf("Enter the name: ");
    scanf("%s",e1.name);
    printf("Enter the code: ");
    scanf("%d",&e1.code);
    printf("Enter the salary: ");
    scanf("%f",&e1.salary);
    printf("%s %d %0.f\n", e1.name, e1.code, e1.salary);
    struct employee e2 = {441, "Paarish", 34.5};
    printf("%s %d %0.f\n", e2.name, e2.code, e2.salary);
    return 0;
}