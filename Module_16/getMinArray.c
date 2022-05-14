#include<stdio.h>
#include<limits.h>
int getMin(int x, int y)
{
    if(x<y) return x;
    else return y;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr+i);
        min = getMin(min,arr[i]);
    }
    printf("%d",min);
    return 0;
}
