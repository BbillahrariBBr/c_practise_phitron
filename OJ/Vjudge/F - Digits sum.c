#include<stdio.h>
int main()
{
    //may b previous solve it
    int n;
    scanf("%d",&n);
    long long int dgt =0;
        while(n>0)
        {
            dgt = dgt + (n%10);
            n /=10;
        }
    printf("%lld\n",dgt);
    return 0;
}
