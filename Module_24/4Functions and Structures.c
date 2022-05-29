#include<stdio.h>
// all date write first to last in a year
// add function here in practice day
struct Date{
    int day;
    int month;
    int year;

};
int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    //Declaration
    struct Date today;
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    struct Date nextDay = today;
    if(nextDay.day != daysInMonths[nextDay.month-1])
    {
        nextDay.day++;
    }
    else if(nextDay.month != 12){
        nextDay.day =1;
        nextDay.month++;
    }
    else
    {
        nextDay.day =1;
        nextDay.month =1;
        nextDay.year++;
    }
    printf("%d-%d-%d\n",nextDay.day,nextDay.month,nextDay.year);

    return 0;
}


