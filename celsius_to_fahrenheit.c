#include <stdio.h>

/*
Program: Celsius to Fahrenheit Conversion
Description:
This program converts a fixed Celsius temperature (37°C)
into Fahrenheit using the formula: F = (C × 9/5) + 32
*/

int main()
{
    float celsius = 37;
    float fahrenheit;

    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying the result
    printf("The value of this Celsius temperature in Fahrenheit is %.2f\n", fahrenheit);

    return 0;
}