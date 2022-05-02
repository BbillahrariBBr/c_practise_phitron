
#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    if(a+b >c && b+c>a && c+a>b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}
