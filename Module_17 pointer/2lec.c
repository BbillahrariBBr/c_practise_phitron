#include<stdio.h>
int main()
{
    // pointer arithemetic
    char ch = 'a';
    char *pch = &ch;
    printf("%lld and char %c\n", pch,*pch);
    pch++;
    printf("%lld and char %c\n", pch,*pch);

    int nmbr = 20;
    int *pnmbr = &nmbr;
    printf("%lld and nmbr %d\n", pnmbr,*pnmbr);
    pnmbr++;
    printf("%lld and nmbr %d\n", pnmbr,*pnmbr);

    return 0;
}

