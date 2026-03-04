#include <stdio.h>

/*
    Program: Sum of Two Numbers
    Description:
    - Takes two integer inputs from the user
    - Stores them using scanf()
    - Prints their sum using printf()
*/

int main()
{

    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The sum of a and b is %d\n", a + b);

    return 0;
}