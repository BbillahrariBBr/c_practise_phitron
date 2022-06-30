#include<stdio.h>
int main()
{
    int t,n, count=0;
    scanf("%d",&t);
    for(int i =0; i<t; i++)
    {
        scanf("%d",&n);
        int j, arr[n],counter[n+1];
        for(j=0; j<n+1; j++)
        {
            counter[j]=0;
        }
        for(j=0; j<n; j++)
        {
            scanf("%d", arr+j);
            counter[arr[j]]++;
        }
        for(j=0;j<=n;j++)
        {
            if (counter[j]>=3)
            {
                count =1;
                printf("%d\n",j);
                break;
            }
        }
        if (count ==0)
        {
            printf("-1\n");
        }
        count =0;
    }

    return 0;
}
