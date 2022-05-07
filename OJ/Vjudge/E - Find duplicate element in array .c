#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long arr[n];
    for(int i =0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(int i =0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    printf("%d\n",arr[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
