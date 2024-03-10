# String Manipulation

This C program allows users to input strings, trims trailing newline characters, and reverses the strings.

## How it Works

1. The program defines a constant `STR_MAX` to specify the maximum string length.
2. It includes function prototypes for three functions:
    - `stringLength`: Calculates the length of a string.
    - `trim`: Trims trailing newline characters from a string.
    - `reverse`: Reverses the characters in a string.
3. In the `main()` function:
    - It declares an array `input` to store the user input string.
    - Enters an infinite loop to continuously prompt the user for input strings until the input starts with a period (`.`).
    - Uses `fgets` to get the input string.
    - Checks if the first character of the input is a period (`.`) to break out of the loop.
    - Trims the newline character from the input string.
    - Prints the trimmed string.
    - Reverses the input string.
    - Prints the reversed string.
      
## Functions

- `int stringLength(const char *str)`: Calculates the length of a string.
  
- `void trim(char *str)`: Trims trailing newline characters from a string.
  
- `void reverse(char *str)`: Reverses the characters in a string.

## Notes

- The program utilizes string manipulation functions to trim and reverse strings.
- It demonstrates the use of `fgets` for string input and an infinite loop with a break condition.
