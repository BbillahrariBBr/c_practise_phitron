/*Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.
Example

Input

First number: 10

Second number: 5

Output

Sum = 15

Difference = 5

Product = 50

Quotient = 2

Modulus = 0

*/
#include<stdio.h>
int main()
{
    int first_number;
    printf("First number: ");
    scanf("%d", &first_number);

    int second_number;
    printf("Second number: ");
    scanf("%d", &second_number);

    printf("Sum = %d\n",first_number+second_number);
    printf("Difference = %d\n",first_number-second_number);
    printf("Product = %d\n",first_number*second_number);
    printf("Quotient = %d\n",first_number/second_number);
    printf("Modulus = %d\n",first_number%second_number);

    return 0;
}
