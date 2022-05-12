#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,log,i=0 ;
    scanf("%lld",&n);
    while((long long int)pow(2,i)<=n)
    {
        i++;
    }
//    log = log2(n);
    printf("%d",i-1);
//    if(n<=0)
//        printf("-1\n");
//    else
//    {
//        log = log2(n);
//        printf("%lld\n",log);
//    }

    return 0;
}


