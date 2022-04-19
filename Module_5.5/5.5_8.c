#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    int result = a>b ? a:b;
    printf("bigger one is %d", result);
    return 0;
}
