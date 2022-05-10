#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n ; i++)
    {
        scanf("%d",arr+i);
    }
    int ans =0,minval = arr[0], maxval = arr[0];
    for(int i =1; i<n;i++)
    {
        if(arr[i]< minval || arr[i]>maxval )
        {
            ans++;
        }
        if(arr[i]> maxval)
        {
            maxval = arr[i];
        }
        if(arr[i]<minval)
        {
            minval = arr[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}
