#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int generated_number;
    int number_generations = 6;
    int numbers[number_generations];
    for(int l = 0; l<number_generations; l++){
        int generated_number = (rand()%100)+1;
        printf("%d",generated_number);
        printf("\n");
        numbers[l] = generated_number;
    }
    // int numbers[number_generations];
    for(int k = 0; k<number_generations; k++){
        if(numbers[k]>90){
            a++;
        }
        else if(numbers[k]>80){
            b++;
        }
        else if(numbers[k]>70){
            c++;
        }
        else if(numbers[k]>60){
            d++;
        }
        else if(numbers[k]>50){
            e++;
        }
        else if(numbers[k]>40){
            f++;
        }
        else if(numbers[k]>30){
            g++;
        }
        else if(numbers[k]>20){
            h++;
        }
        else if(numbers[k]>10){
            i++;
        }
        else{
            j++;
        }
        // printf("%d\n",a);
    }
    printf("Number between 90-100 = %f\n",((float)a/number_generations)*100);
    printf("Number between 80-90 = %f\n",((float)b/number_generations)*100);
    printf("Number between 70-80 = %f\n",((float)c/number_generations)*100);
    printf("Number between 60-70 = %f\n",((float)d/number_generations)*100);
    printf("Number between 50-60 = %f\n",((float)e/number_generations)*100);
    printf("Number between 40-50 = %f\n",((float)f/number_generations)*100);
    printf("Number between 30-40 = %f\n",((float)g/number_generations)*100);
    printf("Number between 20-30 = %f\n",((float)h/number_generations)*100);
    printf("Number between 10-20 = %f\n",((float)i/number_generations)*100);
    printf("Number between 0-10 = %f\n",((float)j/number_generations)*100);
    return 0;
}