#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long arr[n];
    for(int i =0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }

    long long max = arr[0];
    for(int i =1; i<n;i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%lld\n",max);
    return 0;
}
