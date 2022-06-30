#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int dgt, temp=n, sum=0;
    while(temp >0)
    {
        dgt = temp%10;
        sum += dgt;
        temp /= 10;
    }
    printf("%d\n",sum);
    return 0;
}
