#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int sum,cube;
    cube = (n*(n+1))/2;
    sum = cube*cube;
    printf("%lld\n",sum);
    return 0;
}

