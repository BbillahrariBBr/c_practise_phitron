#include<stdio.h>

void makeNArray(int n, int squares[])
{
    for(int i=0; i<n; i++)
    {
        squares[i] = (i+1)*(i+1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int squares[n];

    makeNArray(n,squares);
    for(int i=0; i<n; i++)
    {
        printf("%d ",squares[i]);
    }

    return 0;
}
