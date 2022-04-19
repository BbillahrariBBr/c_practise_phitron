#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    printf("bigger one is %d", ((a+b) + abs(a-b))/2);
    return 0;
}
