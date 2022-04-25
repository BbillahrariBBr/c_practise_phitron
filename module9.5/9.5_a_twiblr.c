#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d",&a, &b);
    int follow = 2*a+100;
    int res = follow -b;
    printf("%d\n",res);
    return 0;
}
