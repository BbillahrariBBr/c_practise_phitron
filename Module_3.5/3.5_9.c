/*

Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :

Input no. of days: 2535

Expected Output:

6 Year(s)

11 Month(s)

15 Day(s)



        Hint: It is similar to the Feet-Inches problem. First find the number of years and the remaining number of days. Then convert the remaining number of days into months and days.
*/
#include<stdio.h>
int main()
{
    int days;
    printf("no. of days: ");
    scanf("%d",&days);
    int year = days/365;
    printf("%d Year(s)\n",year);
    int month = (days-(year*365))/30;
    printf("%d Month(s)\n",month);

    days = (days-(year*365)-(month*30));
    printf("%d Day(s)\n",days);
    return 0;
}
