#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    while(n>0)
    {
        sum = (sum*10) + (n%10);
        n /=10;

    }
    printf("%lld\n",sum);

    return 0;
}
