#include<stdio.h>
int main()
{
    int arr[100],rev[100],size,i,j;
    scanf("%d",&size);
    for(i=0; i<size;i++)
    {
        scanf("%d",arr+i);
    }
//    for(i=size-1,j=0;i>=0;i--,j++)
//    {
//        rev[j] = arr[i];
//        printf("%d\t",rev[j]);
//    }

    for(i=size-1,j=0;j<i;i--,j++)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] =temp;

    }
//    for(i=0;i<size;i++)
//    {
//        rev[size-1-i] = arr[i];
//
//    }
     for(i=0;i<size;i++)
    {
//        printf("%d\t",rev[i]);
        printf("%d\t",arr[i]);

    }


    return 0;
}

