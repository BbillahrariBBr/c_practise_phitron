#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    long long x=&arr[0],y=&arr[4];
    printf("%lld\n",y);
    printf("%lld\n",x);
     printf("%lld",y-x);

    return 0;
}
