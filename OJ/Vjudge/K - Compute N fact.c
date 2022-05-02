
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fact=1;
    if(n>=0 && n<=10)
    {
        for(int i=1; i<=n; i++)
        {
            fact *=i;
        }
    }
    printf("%lld\n",fact);
    return 0;
}
