#include<stdio.h>
int main()
{
    int n = 10;
    int a[n],b[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0; i<n;i++)
    {
        scanf("%d",b+i);
    }
    for(int i=0; i<n;i++)
    {
        int c[n];
        c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];

    }
    printf("array  A value after swapping\n");
    for(int i=0; i<n;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\narray  B value after swapping\n");
    for(int i=0; i<n;i++)
    {
        printf("%d ",b[i]);

    }
    return 0;
}
