#include <stdio.h>

/*
Write a program to calculate the factorial of a number using both:
An iterative function.
A recursive function.
Compare the outputs of both methods for the same input.
*/

// Function prototypes
long long iterative_factorial(int n);
long long recursive_factorial(int n);

int main()
{
    int number;
    long long iterative, recursive;

    // Program introduction
    printf("This program calculates the factorial of a number using both an iterative and a recursive function.\n");

    // Input from user
    printf("Please enter a non-negative number: ");
    scanf("%d", &number);

    // Input validation
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial using both methods
    iterative = iterative_factorial(number);
    recursive = recursive_factorial(number);

    // Display results
    printf("Factorial of %d using iterative method is: %lld\n", number, iterative);
    printf("Factorial of %d using recursive method is: %lld\n", number, recursive);

    return 0;
}

// Iterative factorial function
long long iterative_factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Recursive factorial function
long long recursive_factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // Base case
    }
    return n * recursive_factorial(n - 1); // Recursive case
}
