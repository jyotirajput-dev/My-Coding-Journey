#include <stdio.h>

/*
    Program: Area of Circle and Volume of Cylinder
    Description:
    This program calculates:
    1. Area of a Circle
    2. Volume of a Cylinder
    using predefined values.
*/

int main()
{
    int radius = 6;
    int height = 3;
    float pi = 3.14;

    // Calculating area of circle
    float area = pi * radius * radius;

    // Calculating volume of cylinder
    float volume = pi * radius * radius * height;

    printf("The area of the circle is %.2f\n", area);
    printf("The volume of the cylinder is %.2f\n", volume);

    return 0;
}