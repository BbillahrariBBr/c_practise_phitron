#include<stdio.h>
int main()
{
    long long int n,temp,res=0;
    scanf("%lld", &n);
    temp =n;
    while(n>0)
    {
        int mod = n%10;
        res  = res + mod;
        n /=10;
    }
    if(temp%res ==0)
    {
        printf("Yes\n");
    }
    else printf("No\n");
    return 0;
}
