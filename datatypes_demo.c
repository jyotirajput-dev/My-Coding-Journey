#include <stdio.h>

/*
    Program: Data Types Demonstration in C
    Description:
    - Demonstrates basic data types in C
    - Shows memory size concept (commonly used sizes)
    - Prints ASCII value of a character
    - Performs basic arithmetic operations
*/

int main()
{

    // Integer data type (usually 4 bytes)
    int a = 5;
    int d = 78;
    int e = 56 + 89;

    // Float data type (usually 4 bytes)
    float b = 9.5;

    // Character data type (usually 1 byte)
    char c = 'u';

    printf("The value of a is %d\n", a);
    printf("The value of b is %.2f\n", b);
    printf("The ASCII value of %c is %d\n", c, c);
    printf("The value of c is %c\n", c);
    printf("Sum of a and d is %d\n", a + d);
    printf("The value of e is %d\n", e);

    return 0;
}