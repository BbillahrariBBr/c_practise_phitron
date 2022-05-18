#include<stdio.h>
void rotateArray(int n, int arr[])
{
    int temp = arr[0];
    for(int i=0; i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
void rotateByK(int n, int arr[],int k)
{
    k = k%n;
    for(int i=0; i<k; i++)
    {
        rotateArray(n,arr);
        printf("Iteration %d: ", i+1);
        for(int i=0; i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int k;
    scanf("%d",&k);
    rotateByK(n,arr,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}



