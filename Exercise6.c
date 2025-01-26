#include <stdio.h>
#include <math.h>

/*
Write a program that prompts the user to enter a positive integer.
Determine whether the entered number is a prime number.
A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
Example:
Input: 17
Output: 17 is a prime number.
*/

int main()
{
    int number, i;
    int is_prime = 1; // Flag variable: 1 means prime, 0 means not prime

    printf("This program checks if the given number is prime or not.\n");

    // Input validation
    while (1)
    {
        printf("Please enter a natural number: ");
        if (scanf("%d", &number) == 1 && number >= 1)
        {
            break; // Valid input, exit the loop
        }
        else
        {
            printf("Error: Invalid input. Please enter a valid positive number.\n");
            while (getchar() != '\n') { } // Clear invalid input
        }
    }

    if (number == 1)
    {
        printf("1 is not a prime number.\n");
    }
    else
    {
        for (i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
        }

        if (is_prime)
        {
            printf("%d is a prime number.\n", number);
        }
        else
        {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}
