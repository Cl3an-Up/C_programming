#include <stdio.h>

/*
Write a program that takes two numbers as input from the user.
Perform addition, subtraction, multiplication, and division on the numbers.
Print the results.
Bonus: Ensure the division result is displayed as a floating-point number.
*/

int main()
{
    int num1, num2;
    float div;

    printf("This program performs basic arithmetic operations on two numbers.\n");

    printf("Please enter first number:");
    scanf("%d", &num1);

    printf("Please enter second number:");
    scanf("%d", &num2);

    div = num1 / (float)num2;

    printf("The addition of these two numbers is: %d\n", num1 + num2);
    printf("The subtraction of these two numbers is: %d\n", num1 - num2);
    printf("The multiplication of these two numbers is: %d\n", num1 * num2);
    
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    else
    {
        div = num1 / (float)num2;
        printf("The division of these two numbers is: %.2f\n", div);
    }

    return 0;
}
