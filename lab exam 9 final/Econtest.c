
#include<stdio.h>
int main()
{
    int t, min;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",arr+i);

        int temp;
         for(i=0; i<n; i++){
            for(j=i+1; j<n; j++)
            {

                if(arr[i] < arr[j])
                {
                    temp     = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        min = arr[0]-arr[1];
        for(i =1; i<n-1; i++)
        {
            if(arr[i] - arr[i+1] <min)
                min = arr[i]-arr[i+1];
        }
        printf("%d",min);

//        for(i = 0; i<n; i++)
//            printf("%d ",arr[i] );
        printf("\n");
    }

    return 0;
}
