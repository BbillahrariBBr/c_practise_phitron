#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int total = a*6;
    if(b <= total )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
