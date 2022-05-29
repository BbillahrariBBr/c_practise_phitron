#include<stdio.h>
//struct is a complex type of data type struct syntex struct struct name {}; end ; must.
struct Date{
    int day;
    int month;
    int year;

};
int main()
{
    //Declaration
    struct Date today = {28,5,2022};
    //update today variable
    today = (struct Date){1,1,2000};

//    today.day =28;
//    today.month=05;
//    today.year=2022;
    printf("%d-%d-%d\n",today.day,today.month,today.year);

    return 0;
}
