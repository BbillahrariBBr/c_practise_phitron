#include<stdio.h>
char getLetter(int x)
{
    return x+'a'-1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%c",getLetter(n));
    return 0;
}
