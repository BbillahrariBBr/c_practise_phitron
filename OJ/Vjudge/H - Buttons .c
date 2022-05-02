#include<stdio.h>
int main()
{
    int a,b,res;
    scanf("%d %d",&a,&b);
    int two_a = a+(a-1);
    int two_b = b+(b-1);
    int ab = a+b;
    res = (two_a> two_b && two_a>ab) ? (two_a):((two_b>ab)?(two_b):(ab));
    printf("%d\n",res);
    return 0;
}
