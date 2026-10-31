#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, temp, j;
    int roll_no[20];
    int age[20];
    int marks[20];

    srand(time(0));

    for(i=0; i<20; i++){
        roll_no[i] = rand() % 1001 + 1000;
    }
    for(i=0; i<20; i++){
        age[i] = rand() % 11 + 15;
    }
    for(i=0; i<20; i++){
        marks[i] = rand() % 101 + 0;
    }
    for(j=0; j<19; j++){
        for(i=0; i<19; i++){
            if(age[i]>age[i+1]){
                // Swap ages
                temp = age[i];
                age[i]=age[i+1];
                age[i+1]=temp;
                
                // Swap roll numbers
                temp = roll_no[i];
                roll_no[i]=roll_no[i+1];
                roll_no[i+1]=temp;
                
                // Swap marks
                temp = marks[i];
                marks[i]=marks[i+1];
                marks[i+1]=temp;
            }
        }
    }
    printf("a) Part: \n");
    for(i=0; i<20; i++){
        printf("Roll No: %d\tAge: %d\tMarks: %d\n", roll_no[i], age[i], marks[i]);
    }

    printf("b) Part: \n");
    for(i=0; i<20; i++){
        for(j=i+1; j<20; j++){
            if (marks[i]==marks[j]){
                printf("Roll: %d\tAge: %d\tMarks: %d\n",
                    roll_no[i], age[i], marks[i]);

                printf("Roll: %d\tAge: %d\tMarks: %d\n",
                    roll_no[j], age[j], marks[j]);
            }
        }
    }

    return 0;
}