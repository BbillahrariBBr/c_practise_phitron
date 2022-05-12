#include<stdio.h>
int main()
{
    int n,p,i,count=0;
    scanf("%d %d",&n,&p);
    int arr[n];
    for(i =0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int comp = arr[p-1];
    for(i=0;i<n;i++)
    {
        if(comp <=arr[i])
        {
            if(comp ==0 && arr[i]==0)
                count = count;
            else
                count++;
        }

    }
    printf("%d\n",count);

    //printf("%d",comp);
    return 0;
}
