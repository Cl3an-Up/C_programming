#include <stdio.h>

/*
Define constants for the value of pi (3.14159) and the radius of a circle.
Use the constants to calculate and print the area and circumference of the circle using appropriate format specifiers.
Formulae:
Area = π × radius²
Circumference = 2 × π × radius
*/

int main()
{
    const float PI = 3.14159;
    float radius_circle, Area, Circumference;

    printf("This program calculates the Area and Circumference of the circle.\n");

    printf("Please enter the radius of the circle: ");
    scanf("%f", &radius_circle);

    if (radius_circle < 0)
    {
        printf("Error: Radius cannot be negative.\n");
        return 1;
    }

    Area = PI * radius_circle * radius_circle;
    Circumference = 2 * PI * radius_circle;

    printf("The Area of the given circle is %.4f.\n", Area);
    printf("The Circumference of the given circle is %.4f.\n", Circumference);

    return 0;
}
