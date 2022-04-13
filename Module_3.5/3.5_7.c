/*
Write a C program to input temperature in Centigrade and convert to Fahrenheit. Example
Input

Enter temperature in Celsius = 100

Output

Temperature in Fahrenheit = 212.0 F



        Hint: Temperature conversion formula from degree Celsius to Fahrenheit is given by -
        f = (c *1.8 ) +32
*/
#include<stdio.h>
int main()
{
    float c;
    printf("Enter temperature in Celsius = ");
    scanf("%f",&c);
    float f = (c*1.8)+32;
    printf("Temperature in Fahrenheit = %.1f F",f);
    return 0;
}
