#include<stdio.h>
int main()
{
    int a[10] = {1};
    for(int i =0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    int sz = sizeof(a)/sizeof(a[0]);
    printf("%d",sz);
    return 0;
}
