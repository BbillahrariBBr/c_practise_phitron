#include<stdio.h>
#include<string.h>
void tRuncate(char str[],int t)
{
    int n = strlen(str);
    if(t<0 || t>n) return;
    str[t] = '\0';
}
int main()
{
    char str[101];
//    scanf("%s",str);
    gets(str);
    int len = strlen(str);
    int t;
    scanf("%d",&t);
    tRuncate(str,t);
    printf("%s",str);
    return 0;
}
