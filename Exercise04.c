#include <stdio.h>

/*
Write a program that prompts the user to enter a positive integer n.
Calculate and display the sum of all even numbers and the sum of all odd numbers from 1 to n.
Example:
Input: n = 10
Output:
Sum of even numbers: 30
Sum of odd numbers: 25
*/

int main()
{
    int num, i;
    int even_sum = 0, odd_sum = 0;

    printf("This program calculates the sum of all odd and even numbers from 1 to give number.\n");

    printf("Please enter a positive number: ");
    if (scanf("%d", &num) != 1 || num < 1)
    {
        printf("Error: Invalid input. Please enter positive number.\n");
        return 1;
    }
    
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    
    printf("Sum of even numbers: %d.\n", even_sum);
    printf("Sum of odd numbers: %d.\n", odd_sum);
    
    return 0;
}
