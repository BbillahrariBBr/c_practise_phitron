#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[101];
    int i,j;

    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    int temp;
     for(i=0; i<n; i++){
        for(j=i+1; j<n; j++)
        {

            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum =0;
    for( i=0;i<m;i++)
    {
        if(arr[i]<0){
                sum = sum-arr[i];

        }
    }
    printf("%d\n",sum);

    return 0;
}
