#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    char name[10];
    float salary;
}emp;
int main(){
    struct employee e1;
    e1.code = 441;
    strcpy(e1.name, "Paarish");
    e1.salary = 1000000;
    printf("%s %d %0.f\n", e1.name, e1.code, e1.salary);
    emp e2;
    e2.code = 441;
    strcpy(e2.name, "Paarish");
    e2.salary = 1000000;
    printf("%s %d %0.f\n", e2.name, e2.code, e2.salary);
    return 0;
}