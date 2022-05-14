#include<stdio.h>
int getMin(int x, int y)
{
    int min;
    if(x<y)
        min =x;
    else
        min=y;
    return min;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int temp = getMin(a,getMin(b,c));
    printf("%d",temp);

    return 0;
}
