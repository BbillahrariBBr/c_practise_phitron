#include<stdio.h>
int main()
{
    //n times test case;
    int n,i;
    scanf("%d",&n);
    int arr[n+1], gift[n+1];
    for(i = 1; i<=n; i++)
    {
        scanf("%d",arr+i);
        gift[arr[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",gift[i]);
    }

    return 0;
}
