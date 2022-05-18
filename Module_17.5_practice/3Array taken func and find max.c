#include<stdio.h>
#include<limits.h>
int maxNumber(int a,int b)
{
    if(a>b) return a;
    else    return b;
}
getMax(int n, int arr[])
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        max = maxNumber(max,arr[i]);
    }
    return max;

}

int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr+i);
    }
    int max = getMax(n,arr);
    printf("%d",max);

}
