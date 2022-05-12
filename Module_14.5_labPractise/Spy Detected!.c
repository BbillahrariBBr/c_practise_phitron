#include<stdio.h>
int main()
{
    //for n case
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[101],pos_count[101]={0};
        //number of input
        int n,i,j;
        scanf("%d",&n);
        for(i =0;i<n; i++ )
        {
            scanf("%d", arr+i);
            pos_count[arr[i]]++;
        }
        for(i=0; i<101;i++)
        {
            if(pos_count[i]==1) break;
        }
        for(j= 0; j<n; j++)
        {
            if(i==arr[j]) break;
        }
        printf("%d\n",j+1);
    }
    return 0;
}
