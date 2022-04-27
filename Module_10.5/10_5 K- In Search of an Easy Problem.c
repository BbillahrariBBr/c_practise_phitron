#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag =0;
    for(int i =1; i<=n; i++)
    {
        int prb;
        scanf("%d",&prb);
        if(prb == 1)
        {
            flag =1;
            break;
        }
    }
    if(flag==1){
        printf("HARD\n");
    }
    else
    {
       printf("EASY\n");
    }
}
