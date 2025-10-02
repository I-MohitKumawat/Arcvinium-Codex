"""
Project: Reverse a String
Description: Reverse a string without using any built-in functions.
Author: Mohit Kumawat
Date: 2025-10-02
"""

def reverse_str(s: str) -> str:

    reversed_string: str = ""
    # prepend each charater to the string 
    for char in s:
        reversed_string = char + reversed_string
    print(f"Reverse {s} :- {reversed_string}")

    return reversed_string

def main() -> None:
    reverse_str("Hello World")
    reverse_str("Coffee")
    reverse_str("stressed")

if __name__ == '__main__':
    main()