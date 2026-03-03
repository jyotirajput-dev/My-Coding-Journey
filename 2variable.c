#include <stdio.h>

int main()
{
    //--------->All have their storing capacity like in int cna take only 4 bytes means and 4X8 = 32 bits
    // becasue 1byte is equals to 8 bits 1 byte 8 bits ke barabar hota hai
    // vese hi float takes 4 bytes as well
    // character takes 2 bytes means 2X8 = 16 means 16 bits
    int a = 5; // int ke andar hum sirf interger value dal sakte like only 0 to 9 none other value
    // int b= 8.5; //not recommended because 8.5 is not an integer.
    float b = 9.5; // float ke ander hum keval point value dalte like 9.5
    char c = 'u';  // char use for character value
    int d = 78;
    int e = 56 + 89;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f\n", b);
    printf("The ascii value of u is %d\n", c);
    printf("The value of c is %c\n", c);
    printf("Sum of a and d is %d\n", a + d);
    printf("Sum of e is %d\n", e);
    return 0; // return 0; is for run succesfully
}
