#include<stdio.h>

struct Date {

    int date,year,month;

};

int main()

{

    struct Date date1={28,12,2022};
    printf("%d",date1.year);
    return 0;

}
