#include<stdio.h>

int gcd(int a, int b)
{
    while(a !=0)
    {
        int rem =  b%a;
        b = a;
        a = rem;
    }
    return b;
}
int getGcd(int n, int arr[])
{
    int g = arr[0];
    for(int i =1; i<n;i++)
    {
        g = gcd(arr[i],g);
    }
    return g;
}
int main()
{
    int n = 10;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr+i);
    }
    int g = getGcd(n,arr);
    printf("%d",g);
    return 0;
}
