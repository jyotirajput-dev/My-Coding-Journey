#include <stdio.h>

/*
Program: Celsius to Fahrenheit Converter
Description:
This program converts a temperature from Celsius to Fahrenheit
using the formula: F = (C × 9/5) + 32
*/

int main()
{
    float celsius, fahrenheit;

    // Taking input from user
    printf("Enter temperature in Celsius:\n");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying result
    printf("Temperature in Fahrenheit is %.2f\n", fahrenheit);

    return 0;
}