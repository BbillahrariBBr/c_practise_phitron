
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int sum;
    sum = (n*(n+1)*((2*n)+1))/6;
    printf("%lld\n",sum);
    return 0;
}
