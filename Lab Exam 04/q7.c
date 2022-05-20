#include<stdio.h>

void retTwoNumber(int a,int b,int *pa, int *pb)
{
    *pa = b;
    *pb = a;

}
int main()
{
    int a, b, pa, pb;
    scanf("%d %d",&a,&b);
    retTwoNumber(a,b,&pa,&pb);
    printf("pa=b-> is %d and pb=a->%d",pa,pb);

    return 0;
}
