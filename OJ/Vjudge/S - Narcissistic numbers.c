#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,temp,another_temp, res=0,sum =0, count =0;
    scanf("%lld", &n);
    temp =n;
    another_temp =n;
    while(temp >0)
    {
        temp /=10;
        count++;
    }
    while(n>0)
    {
        long long int mod = n%10;
        res = res + pow(mod,count);
        n /=10;
    }
    if(another_temp == res)
    {
        printf("Yes\n");
    }
    else printf("No\n");
    return 0;
}
