#include<stdio.h>
int main()
{
    // using for loop 30 42
    int a,b,x,gcd = 1;
    scanf("%d %d",&a,&b);
    while(a!=0)
    {
        int rem = b%a;
        b = a;
        a = rem;
        printf("%d %d\n",a,b);
    }
    printf("GCD is: %d\n",b);
    return 0;
}

