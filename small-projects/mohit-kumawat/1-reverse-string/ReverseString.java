/*
Project: Reverse a String
Description: Reverse a string without using any built-in functions.
Author: Mohit Kumawat
Date: 2025-10-02
*/

public class ReverseString {

    public static String reverseStr(String input){
        StringBuilder reversed = new StringBuilder();
        int inputLen = input.length();

        // Starts backwards and adds a char to the string
        for(int i=inputLen -1;i>=0; i--){
            reversed.append(input.charAt(i));
        }
        return reversed.toString();
    }

    public static void main(String[] args) {

        //example1
        String example1 = reverseStr("Hello World");
        System.out.println(String.format("Reversed string is: %s", example1));

        //example2
        String example2 = reverseStr("Coffee");
        System.out.println(String.format("Reversed string is: %s", example2));

        //example3
        String example3 = reverseStr("stressed");
        System.out.println(String.format("Reversed string is: %s", example3));

    }
}