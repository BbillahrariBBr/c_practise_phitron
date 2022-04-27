#include<stdio.h>
int main()
{
    int v,f,m,t;
    scanf("%d %d %d %d",&v, &f, &m, &t);
    int total = f+m+t;

    int shampoo = v % total;
    if(shampoo >= 0 && shampoo <f)
    {
        printf("F");
    }

    else if(shampoo >= f && shampoo <f+m)
    {
        printf("M");
    }

    else
    {
        printf("T");
    }
    return 0;
}
