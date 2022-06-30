#include<stdio.h>
int main()
{
    int l,r, j=0;
    scanf("%d %d", &l,&r);
    char str[100001];
    scanf("%s",str);
    char sub[100001];
    for(int i = r-1; i>=l-1; i--)
    {
        sub[j] = str[i];
        j++;
    }
    j=0;
//    printf("%s", sub);
    for(int i = l-1; i<=r-1;i++)
    {
        str[i] = sub[j];
        j++;
    }
    printf("%s\n",str);

    return 0;
}
