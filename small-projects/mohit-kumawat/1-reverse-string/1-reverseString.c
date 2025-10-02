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

    // dynamically allocated memory for pointer "output"
    char *output = malloc(len +1);

    // standard malloc procedure
    if(output == NULL){
        printf("Memory allocation failed.\n");
        return NULL;
    }

    // reverse string logic
    for (int i=0; i<len; i++){
        output[i] = input[len - 1 -i];
    }

    output[len] = '\0'; // nulish terminator to end the string
    return output;
}


int main(void){

    char *reversed;

    //Example: 1
    reversed = reverse_str("Hello world");
    if(reversed != NULL){
        printf("%s\n", reversed);
        free(reversed);
    }
    
    //Example: 2
    reversed = reverse_str("Coffee");
    if (reversed != NULL) {
        printf("%s\n", reversed);
        free(reversed);
    }

    //Example: 3
    reversed = reverse_str("stressed");
    if (reversed != NULL) {
        printf("%s\n", reversed);
        free(reversed);
    }
    
    return 0;
}