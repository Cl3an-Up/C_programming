#include <stdio.h>
#include <string.h>

void replaceSWithTripleS(char *str)
{
    int len = strlen(str);
    char result[1000]; // Adjust size as needed
    int j = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 's' || str[i] == 'S')
        {
            result[j++] = 's';
            result[j++] = 's';
            result[j++] = 's';
        } else
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    // Copy the result back to the original string
    strcpy(str, result);
}

int main()
{
    char input[1000]; // Adjust size as needed

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    replaceSWithTripleS(input);

    printf("Modified string: %s\n", input);

    return 0;
}