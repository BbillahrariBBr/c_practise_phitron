#include<stdio.h>
void makeSum(int a, int b, int *sum)
{
    *sum = a+b;
//    printf("%d",*sum);
}
int main()
{
    int a, b,sum;
//    int *psum = &sum;
    scanf("%d %d",&a,&b);
    makeSum(a,b,&sum);
    printf("%d",sum);

    return 0;
}
