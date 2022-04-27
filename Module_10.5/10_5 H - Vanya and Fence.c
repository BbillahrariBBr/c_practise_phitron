#include<stdio.h>
int main()
{
    int n,h;
    int res = 0;
    scanf("%d %d", &n,&h);
    for(int i =1; i<=n; i++)
    {
        int a;
        scanf("%d",&a);
        if(a<=h)
        {
            res += 1;
        }
        else
        {
            res+=2;
        }

    }
    printf("%d\n",res);
    return 0;
}
