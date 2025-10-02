/*
Project: Reverse a String
Description: Reverse a string without using any built-in functions.
Author:Gaurav Singh CM
Date: 2025-10-02
working:made a function to reverse a given string inside of function used for and while loop,
while loop is used to find the length of the string,for loop is to swap them inside function using i<length/2.
*/
#include <stdio.h>
void reverseString(char str[]) 
{
    
    int length = 0;
    char r;  
    while (str[length] != '\0') 
    {
        length++;
    }

   
    for (int i = 0; i < length / 2; i++) 
    {
        r = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = r;
    }
}

int main() 
{
    char str[100];
    printf("enter a string ");
    scanf("%99s", str);

    reverseString(str);
    printf("reversed %s\n", str);

    return 0;
}