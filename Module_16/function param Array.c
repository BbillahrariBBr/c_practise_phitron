#include<stdio.h>
#include<limits.h>
int getMin(int x, int y)
{
    if(x<y) return x;
    else    return y;
}
int getMinArray(int sz, int a[])
{
    int min = INT_MAX;
    for(int i=0; i<sz; i++)
    {
        min = getMin(min,a[i]);
    }
    return min;
}
int main()
{
    int arr[] ={1,8,2,66,5};
    int n =5;
    printf("%d",getMinArray(n,arr));
    return 0;
}
