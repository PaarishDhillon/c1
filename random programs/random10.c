#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main()
{
    int marks[N];    
    int age[N];    
    int rollno[N];
    int i, j, temp;

    srand(time(0));

    for(i=0; i<N; i++){
        marks[i] = rand() % 101;
        age[i] = 15 + rand() % 11;
        rollno[i] = 1000 + rand() %  1001;
    }

    printf("Initial student data: \n");

    for(i=0;  i<N; i++){
        printf("Roll no.: %d  Age: %d  Marks: %d\n",rollno[i], age[i], marks[i]);
    }

    for(i=0; i<N; i++){
        for(j=0; j<N-i-1; j++){
            if(age[j]>age[j+1]){
                temp =  age[j];
                age[j] = age[j+1];
                age[j+1] = temp;

                temp =  marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
        
                temp =  rollno[j];
                rollno[j] = rollno[j+1];
                rollno[j+1] = temp;
            }
        }
    }
    
    printf("\n");

    printf("Rearranged student data: \n");

    for(i=0;  i<N; i++){
        printf("Roll no.: %d  Age: %d  Marks: %d\n",rollno[i], age[i], marks[i]);
    }

    printf("\n");
    
    printf("Part B:\n");
    
    return 0;
}