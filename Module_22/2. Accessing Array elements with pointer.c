#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
     for(int i=0; i<n;i++)
    {
        scanf("%d",&*(a+i));
    }
    int prod =1;
    for(int i=0; i<n;i++)
    {
        //a[i] = *(a+i) = value
        //&a[i] = &*(a+i) = a+i = address
        prod = prod * *(a+i);
    }
    printf("%d\n",prod);

    return 0;
}
