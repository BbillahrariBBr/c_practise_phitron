#include<stdio.h>
#include<string.h>
int main()
{
    char s[101], t[101];
    scanf("%s %s",s,t);

    int val = strcmp(strlwr(s),strlwr(t));
    if(val<0)
    {
        printf("-1\n");
    }
    else if(val==1)
    {
        printf("1\n");
    }
    else
        printf("0\n");

    return 0;
}
