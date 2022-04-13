/*
Write a C program that takes a positive float number and outputs its integer part and real part.
        Expected Input/Output:

                Enter Number: 3.578

                Integer part: 3

                Real part: .578

Hint: To find the real part, you can subtract the integer part from the number.


*/
#include<stdio.h>
int main()
{
    float number;
    printf("Enter Number: ");
    scanf("%f",&number);
    int integer_part = number;
    float real_part = number- integer_part;
    printf("Integer part: %d\n",integer_part);
    printf("Real part: %.3f",real_part);
    return 0;
}
