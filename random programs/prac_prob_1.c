// check if a given word or string has vowels

#include<stdio.h>
#include<string.h>

void check(char c[]){
    int count = 0;
    int length =  strlen(c);
    for(int i = 0; i < length; i++ ){
        if(c[i] == 'a'|| c[i] == 'o' || c[i] == 'u' || c[i] == 'e' || c[i] == 'i' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U'){
        count++;
    }
    }
    // return count;
    if(count >0){
        printf("Yes there are %d vowels",count);
    }
    else{
        printf("There are no vowels");
    }
}

int main(){
    char sentence[100];
    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    // scanf("%s",sentence);
    check(sentence);
    return 0;
}