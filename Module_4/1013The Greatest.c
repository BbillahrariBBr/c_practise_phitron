// reads 3 int value and present one followed by the message "eh o mario"

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int mxAb = ((a+b)+(abs(a-b)))/2;
    int mxAbc = ((mxAb+c)+(abs(mxAb-c)))/2;
    printf("%d eh o maior\n",mxAbc);
    return 0;
}
