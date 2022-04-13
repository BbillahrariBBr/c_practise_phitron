/*
Write a C program that accepts two integers from the user and calculate the product of the two integers.
Expected Input/Output:

Input the first integer: 25

Input the second integer: 15

Expected Output:

Product of the above two integers = 375
*/
#include<stdio.h>
int main(){

    int first_integer;
    printf("Input the first integer: ");
    scanf("%d", &first_integer);

    int second_integer;
    printf("Input the second integer: ");
    scanf("%d", &second_integer);

    printf("Product of the above two integers = %d", first_integer*second_integer);
    return 0;


}
