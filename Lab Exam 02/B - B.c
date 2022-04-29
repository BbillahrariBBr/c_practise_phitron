#include<stdio.h>
int main()
{
    int n,count =0;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        for(int i=1; i<=n; i++)
        {
            int a,b;
            scanf("%d %d",&b, &a);
            if(a-b>=2)
            {
               count++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}
