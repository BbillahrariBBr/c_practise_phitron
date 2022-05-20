#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    int *ptr;
    ptr= &arr[n-1];
    printf("\n%d number for array: ",n);
    for(int i =0; i<n;i++)
    {
        scanf("%d",ptr);
        ptr--;
    }
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
