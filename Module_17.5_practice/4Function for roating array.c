#include<stdio.h>
void rotateArray(int n, int arr[])
{
    for(int i=0; i<n;i++)
    {
        int temp = arr[i];
        printf("%d ",arr[((i+1)%n)]);

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    rotateArray(n,arr);

    return 0;
}
