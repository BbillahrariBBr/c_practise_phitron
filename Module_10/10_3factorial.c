#include<stdio.h>
int main()
{
    int number;
    int fact =1;
    scanf("%d",&number);
    for(int i=1; i<=number; i++)
    {

        fact *=i;
    }
    printf("Factorial of number %d is %d",number,fact);
    return 0;
}
