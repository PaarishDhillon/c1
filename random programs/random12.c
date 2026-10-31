#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50
int main()
{
    srand(time(0));
    int arr[N], i, j, count=0;
    for(i=0; i<N; i++){
        arr[i] = rand()%91 + 10;
    }
    for(i=0; i<N; i++){
        printf("%d ",arr[i]);
    }
    printf("\nNew: \n");
    for(i=0; i<N; i++){
        for(j=0; j<N-1; j++){
            if(arr[j+1]>arr[j]){
            printf("%d ",arr[j]);
            count++;
            }
            else{
                printf("%d ",arr[i]);
                break;
            }
            printf("\n");
        }
    }
    return 0;
}