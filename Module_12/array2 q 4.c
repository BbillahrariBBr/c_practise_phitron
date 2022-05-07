#include<stdio.h>
int main()
{
    int a[10];
    printf("%d\n",a[3]);
    a[0] +=10;
    printf("%d\n",a[0]);
    a[0] = a[0]*2;

    printf("%d\n",a[0]);
    return 0;
}
