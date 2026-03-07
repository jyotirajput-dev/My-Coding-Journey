#include <stdio.h>

/*
    Program: Area of Rectangle (User Input)
    Description:
    This program takes the length and breadth of a rectangle
    from the user and calculates its area.
*/

int main()
{
    int length, breadth, area;

    // Taking input from user
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &breadth);

    // Calculating area
    area = length * breadth;

    // Displaying result
    printf("The area of the rectangle is %d\n", area);

    return 0;
}