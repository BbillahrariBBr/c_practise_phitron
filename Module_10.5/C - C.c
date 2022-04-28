#include<stdio.h>
int main()
{
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);
    if(s<t)
    {
          if(x>=s && x<t)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        if((x>=s && x<24) || (x>=0 && x<t))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }


    return 0;
}
