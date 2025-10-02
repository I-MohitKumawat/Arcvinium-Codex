/*
Project: Reverse a String
Description: Reverse a string without using any built-in functions.
Author: Mohit Kumawat
Date: 2025-10-02
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_str(const char *input){
    int len = strlen(input);
    char *output = malloc(len +1);

    if(output == NULL){
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i=0; i<len; i++){
        output[i] = input[len - 1 -i];
    }

    output[len] = '\0';
    return output;
}


int main(void){

    char *reversed;

    reversed = reverse_str("Hello world");
    if(reversed != NULL){
        printf("%s\n", reversed);
        free(reversed);
    }
    
    reversed = reverse_str("Coffee");
    if (reversed != NULL) {
        printf("%s\n", reversed);
        free(reversed);
    }

    reversed = reverse_str("stressed");
    if (reversed != NULL) {
        printf("%s\n", reversed);
        free(reversed);
    }
    
    return 0;
}