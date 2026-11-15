
#include <stdio.h>
#include <string.h>

// Approach 1: Using array indexing
int palindrome_array(char str[])
{
    int i;
    int len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

// Approach 2: Using two index variables
int palindrome_two_index(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

// Approach 3: Using pointers
int palindrome_pointer(char str[])
{
    char *left = str;
    char *right = str + strlen(str) - 1;

    while (left < right)
    {
        if (*left != *right)
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

// Main function
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("\nApproach 1 - Array Indexing: ");
    if (palindrome_array(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    printf("Approach 2 - Two Index Variables: ");
    if (palindrome_two_index(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    printf("Approach 3 - Pointer Method: ");
    if (palindrome_pointer(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
