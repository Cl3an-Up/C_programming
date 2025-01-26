#include <stdio.h>

/*
Write a program to convert temperature:
From Celsius to Fahrenheit.
From Fahrenheit to Celsius.
Use the formulas:
Fahrenheit = (Celsius × 9/5) + 32
Celsius = (Fahrenheit - 32) × 5/9
Bonus: Allow the user to choose the conversion type.
*/

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    float fahrenheit, celsius;
    int type;

    printf("This program converts temperature from Celsius to Fahrenheit or Fahrenheit to Celsius.\n");

    printf("Do you want to convert Celsius to Fahrenheit (1) or Fahrenheit to Celsius (2)? (1 or 2): ");
    if (scanf("%d", &type) != 1)
    {
        printf("Error: Invalid input. Please enter 1 or 2.\n");
        return 1;
    }

    if (type == 1)
    {
        printf("Enter the Celsius degree: ");
        if (scanf("%f", &celsius) != 1)
        {
            printf("Error: Invalid temperature input.\n");
            return 1;
        }
        fahrenheit = celsius_to_fahrenheit(celsius);
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
    } else if (type == 2)
    {
        printf("Enter the Fahrenheit degree: ");
        if (scanf("%f", &fahrenheit) != 1)
        {
            printf("Error: Invalid temperature input.\n");
            return 1;
        }
        celsius = fahrenheit_to_celsius(fahrenheit);
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
    } else
    {
        printf("Error: You should enter 1 or 2.\n");
        return 1;
    }

    return 0;
}
