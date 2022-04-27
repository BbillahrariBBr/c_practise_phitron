#include<stdio.h>
int main()
{
    int number, count =0;
    scanf("%d",&number);
    for(int i=2;i*i<=number;i++)
    {
        if(number %i == 0)
        {
           count =1;
           break;

        }
    }
    if(count == 0)
    {
        printf("%d is prime",number);
    }
    else{
        printf("%d is not prime",number);
    }
    return 0;
}
