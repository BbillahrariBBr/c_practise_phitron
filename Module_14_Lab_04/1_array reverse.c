#include<stdio.h>
int main()
{
    int arr[100],rev[100],size,i,j;
    scanf("%d",&size);
    for(i=0; i<size;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=size-1,j=0;i>=0;i--,j++)
    {
        rev[j] = arr[i];
        printf("%d\t",rev[j]);
    }

    return 0;
}

