/*

Write a C program that reads an integer between 1 and 12 and print the month of the year in English.  Use switch case.
Input :

Input a number between 1 to 12 to get the month name: 8

Expected Output:

August

*/

#include<stdio.h>
int main()
{

    int month_in_number;
    scanf("%d", &month_in_number);
    switch(month_in_number){
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Number isnt match");
    }
    return 0;
}
