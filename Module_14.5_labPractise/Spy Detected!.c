#include<stdio.h>
int main()
{
    //for n case
    int t;
    scanf("%d",&t);
    //loop until false 0 = false
    while(t--)
    {
        int arr[101],pos_count[101]={0};

        int n,i,j;
        //number of input
        scanf("%d",&n);
        for(i =0;i<n; i++ )
        {
            scanf("%d", arr+i);
            //count number how many time occurs
            pos_count[arr[i]]++;
        }
        //find the number which is 1 time occure
        for(i=0; i<101;i++)
        {
            if(pos_count[i]==1) break;
        }
        //compare number in first array;
        for(j= 0; j<n; j++)
        {
            if(i==arr[j]) break;
        }
        printf("%d\n",j+1);
    }
    return 0;
}
