#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n;
       scanf("%d",&n);
       int arr[n];
       for(int i =0; i<n; i++)
       {
           scanf("%d", arr+i);
       }
       int j;
       for(int i =0, j = n-1; i<=j; i++,j--)
       {
           if(i==j)
            printf("%d ",arr[i]);
           else
            printf("%d %d ",arr[i], arr[j]);
       }
       printf("\n");
   }
    return 0;
}
