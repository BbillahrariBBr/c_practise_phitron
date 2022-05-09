#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,max,second ;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n;i++)
    {
        scanf("%d",arr+i);
    }

    max = second = INT_MIN;
    for(i=0; i<n;i++){
        if(arr[i]>max)
        {
            second = max;
            max = arr[i];
        }
        else if(arr[i]>second  && arr[i]<max)
        {
            second = arr[i];
        }
    }
    printf("largest = %d\n",max);
    printf("Second largest = %d\n",second);


    return 0;
}

