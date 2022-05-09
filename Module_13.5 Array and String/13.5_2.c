#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n;i++)
    {
        scanf("%d",arr+i);
    }

    int max = arr[0];
    for(i=1; i<n;i++){
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    int max_occr=0;
    for(i=1; i<n;i++){
        if(arr[i]==max)
        {
            max_occr++;
        }
    }
    printf("Maximum is %d\n",max);
    printf("Maximum occusrs %d times",max_occr);

    return 0;
}
