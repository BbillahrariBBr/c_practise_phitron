#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    strrev(a);
    strrev(b);
    printf("%s %s", a,b);

    return 0;
}
