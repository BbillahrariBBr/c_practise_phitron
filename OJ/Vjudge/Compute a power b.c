//Note: Do not use any inbuilt functions/libraries for your main logic.
#include<stdio.h>
int main()
{
    int a,b;
    long long int res=1;
    scanf("%d %d",&a,&b);
    if(a>=1 && a<=100 && b>=0 && b<=9)
    {
        for(int i=1; i<=b; i++)
        {
            res *=a;
        }
    }
    printf("%lld\n",res);
    return 0;
}
