#include <stdio.h>

/*
Program: Area of Circle and Volume of Cylinder (User Input)
Description:
This program takes radius and height from the user
and calculates the area of a circle and the volume of a cylinder.
*/

int main()
{
    int radius, height;
    float pi = 3.14;

    // Taking input from user
    printf("Enter the radius of the circle:\n");
    scanf("%d", &radius);

    printf("Enter the height of the cylinder:\n");
    scanf("%d", &height);

    // Calculating area of circle
    float area = pi * radius * radius;

    // Calculating volume of cylinder
    float volume = pi * radius * radius * height;

    // Printing results
    printf("The area of the circle is %.2f\n", area);
    printf("The volume of the cylinder is %.2f\n", volume);

    return 0;
}