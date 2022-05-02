#include<stdio.h>
int main()
{
    //may b previous solve it
    int n;
    scanf("%d",&n);
    int dgt =0;
        while(n>0)
        {
            dgt = dgt + (n%10);
            n /=10;
        }
    printf("%d\n",dgt);
    return 0;
}
