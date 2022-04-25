#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    for(int i=1; i<=k; i++)
    {
        int mod = n%10;
        if(mod == 0)
        {
            n/=10;
        }
        else
        {
            n -=1;
        }
    }
    if(n<0)
    {
        printf("0\n");
    }
    else
    {
      printf("%d\n",n);
    }

    return 0;
}
