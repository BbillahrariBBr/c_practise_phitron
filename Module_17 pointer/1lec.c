#include<stdio.h>
int main()
{
    int value = 100;
    int* pval = &value;

    printf("%p address has %d\n",pval,*pval);
    printf("%d\n",value);

    value = 200;
    printf("%p address has %d\n",pval,*pval);
    printf("%d\n",value);
    // *pval is equal val
    *pval = 300;
    printf("%p address has %d\n",pval,*pval);
    printf("%d\n",value);

    int value2 =500;
    pval = &value2;
    printf("%p address has %d\n",pval,*pval);
    printf("%d\n",value);
    int v = 100;
    printf("%d", *&v);

    // * adress  -> value
    // & -> value -> address


    return 0;
}

