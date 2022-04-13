/*
Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
Example

Input

Temperature in fahrenheit = 205

Output

Temperature in celsius = 96.11 C


Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by
        f = (c *1.8 ) +32
        c = (f-32)/1.8
*/
#include<stdio.h>
int main()
{
    float f;
    printf("Temperature in fahrenheit = ");
    scanf("%f",&f);
    float c = (f-32)/1.8;
    printf("Temperature in celsius = %.2f F",c);
    return 0;
}

