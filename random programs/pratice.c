// To print the first word of a sentence

#include <stdio.h>

char* get_first_word(char c[]){
    int i = 0;
    while(c[i] != ' ' && c[i] != '\0'){
        i++;
    }
    c[i] = '\0';
    return c;
}

int main(){
    char sentence[] = "My name is Paarish";
    printf("First word is %s", get_first_word(sentence));
    return 0;
}