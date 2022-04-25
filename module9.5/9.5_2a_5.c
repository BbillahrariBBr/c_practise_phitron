#include<stdio.h>
int main()
{
    int i = 100;
    int sum = 0;
    while(i>=0)
    {
        printf("%d + %d = ",i,sum);
        sum += i;
        printf("%d\n",sum);
        i -=3;
    }
    printf("%d",sum);
    return 0;
}
