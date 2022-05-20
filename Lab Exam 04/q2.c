#include<stdio.h>
char retChar(int number, double double_number)
{
    char c = number + double_number ;
    return c;
}

int main()
{
    int number;
    double double_number;
    scanf("%d",&number);
    scanf("%f",&double_number);
    char c = retChar(number, double_number);
    printf("%c",c);
    return 0;
}
