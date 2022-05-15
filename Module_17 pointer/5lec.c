#include<stdio.h>
#include<string.h>
int main()
{
    int *ptr;
    char str[] = "hello";
    char *first = str;
    char *ch = strchr(str,'a');
    printf("%d\n", ch-first);
    printf("%p %lld %d", ch,ch, *ch);

    return 0;
}

