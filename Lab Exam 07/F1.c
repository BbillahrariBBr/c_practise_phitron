#include<stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&d);
        char tel[1000];
        scanf("%s",tel);
        for(i =0; i<d;i++)
        {
            if(tel[i]=='8')
            {
                break;
            }
        }
        if(d-(i+1)>=10)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
