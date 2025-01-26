#include <stdio.h>
#include <string.h>

/*
String Manipulation
Write a program that:
Reads a string input from the user.
Implements and uses functions to:
Count vowels and consonants in the string.
Reverse the string.
Check if the string is a palindrome (reads the same backward as forward).
*/

// Function to count vowels
int count_vowels(char str[])
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

// Function to count consonants
int count_consonants(char str[])
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z' && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) ||
            (str[i] >= 'A' && str[i] <= 'Z' && !(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')))
        {
            count++;
        }
    }
    return count;
}

// Function to reverse the string
void reverse_string(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to check if the string is a palindrome
void is_palindrome(char str[])
{
    int len = strlen(str);
    int palindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("It is a palindrome string.\n");
    }
    else
    {
        printf("It is not a palindrome string.\n");
    }
}

int main()
{
    char str[100];

    printf("This program reads a string from the user and counts vowels and consonants, reverses it, and checks if it's a palindrome.\n");

    printf("Please give a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character from the input

    printf("Count of vowels: %d\n", count_vowels(str));
    printf("Count of consonants: %d\n", count_consonants(str));

    char reversed_str[100];
    strcpy(reversed_str, str);
    reverse_string(reversed_str);
    printf("The reverse of the string is: %s\n", reversed_str);

    is_palindrome(str);

    return 0;
}
