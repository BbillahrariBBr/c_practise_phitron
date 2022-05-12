#include<stdio.h>

int main()
{
    int n,inc=0;
    scanf("%d",&n);
    int arr[100];
    int max =0;
    for(int i =0; i<n; i++)
    {
        scanf("%d",arr+i);
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }
    for(int i =0; i<n; i++)
    {
        inc = inc +(max-arr[i]);

    }
    printf("%d\n",inc);

    return 0;
}
