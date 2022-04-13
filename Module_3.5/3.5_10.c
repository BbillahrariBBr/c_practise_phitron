/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
        Expected Input/Output:

Weight - Item1: 15

No. of item1: 5

Weight - Item2: 25

No. of item2: 4

Expected Output:

Average Value = 19.444444


Hint: Find the total weight and total number of objects and then use it to find the average.

*/
#include<stdio.h>
int main()
{
    // for nmbr 1 item
    float weight_item1;
    printf("Weight - Item1: ");
    scanf("%f",&weight_item1);
    float no_of_item1;
    printf("No. of item1: ");
    scanf("%f",&no_of_item1);

    // for nmbr 2 item
    float weight_item2;
    printf("Weight - Item2: ");
    scanf("%f",&weight_item2);
    float no_of_item2;
    printf("No. of item2: ");
    scanf("%f",&no_of_item2);
    float avg = ((weight_item1*no_of_item1)+(weight_item2*no_of_item2))/(no_of_item1+no_of_item2);
    printf("Average Value = %f",avg);
    return 0;
}

