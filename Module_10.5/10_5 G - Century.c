#include<stdio.h>
int main()
{
    int n,cen;
    scanf("%d",&n);
    if(n%100 == 0)
    {
       cen = n/100;
       printf("%d\n",cen);
    }
    else
    {
        cen = (n/100) + 1;
        printf("%d\n",cen);
    }
    return 0;
}
