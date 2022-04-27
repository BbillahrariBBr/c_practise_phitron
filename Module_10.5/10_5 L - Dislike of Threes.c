#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    for(int i =1; i<=t; i++)
    {
        int inp;
        scanf("%d",&inp);
        if(inp%3!=0&&inp%10!=3){
            printf("%d\n",inp);
        }


    }
    return 0;
}
