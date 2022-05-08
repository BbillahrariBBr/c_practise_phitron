#include<stdio.h>
#include<string.h>
int main()
{
    char s[12] = "Hello world";
//    printf("%d",strlen(s));
    printf("%c",s[strlen(s)-1]);
    return 0;
}

