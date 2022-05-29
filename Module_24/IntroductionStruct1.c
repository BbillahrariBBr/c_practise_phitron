#include<stdio.h>
//struct is a complex type of data type struct syntex struct struct name {}; end ; must.
struct Date{
    int day;
    int month;
    int year;

};
int main()
{
    struct Date date1, date2;
    printf("Enetr person 1 date of birth: ");
    scanf("%d %d %d",&date1.day,&date1.month, &date1.year);

    printf("Enetr person 2 date of birth: ");
    scanf("%d %d %d",&date2.day,&date2.month, &date2.year);

    if(date1.day == date2.day){
        printf("same");
    }
    else printf("Not same");

    return 0;
}
