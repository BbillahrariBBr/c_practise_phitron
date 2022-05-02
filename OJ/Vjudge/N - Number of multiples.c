#include<stdio.h>
int main()
{
//    long long int n,count=0;
//    scanf("%lld",&n);
//    for(long long int i =1; i <=n; i++)
//    {
//        if(i%3 ==0 || i%5==0)
//        {
//            count++;
//        }
//    }
//    printf("%lld\n",count);

    long long int n,i,c=0;
    scanf("%lld",&n);
    c= (n/3) +(n/5) - (n/15);
    printf("%lld\n",c);
    return 0;
}
