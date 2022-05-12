#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<n+1;i++)
    {
        scanf("%d",arr+i);
    }
    return 0;
}
