#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);

    int y = age/365;
    int m = (age%365)/30;
    int d = (age%365)%30;

    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
