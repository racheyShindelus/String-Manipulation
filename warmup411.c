#include <stdio.h>
#include <string.h>

// Max string length
#define STR_MAX 100

// Function prototypes here:
int stringLength(const char *str);
void trim(char *str);
void reverse(char *str);

// Function definitions here:
int stringLength(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void trim(char *str)
{
    int len = stringLength(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

void reverse(char *str)
{
    int start = 0;
    int end = stringLength(str) - 1;

    while (start < end)
    {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

// Main function
int main()
{
    char input[STR_MAX];

    // Loop until we break out
    while (1)
    {
        printf("Enter a string: ");
        fgets(input, STR_MAX, stdin); // Finish this call to fgets
        if (input[0] == '.')         // Break out of loop when the first char is '.'
        {
            break;
        }

        // Trim the newline
        trim(input);

        // Print the trimmed string
        printf("After trim: %s\n", input);

        // Reverse the string
        reverse(input);

        // Print the reversed string
        printf("Reversed: %s\n", input);
    }
}
