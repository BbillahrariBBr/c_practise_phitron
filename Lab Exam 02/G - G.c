#include<stdio.h>
int main()
{
    int a,b;
    int count =0;
    scanf("%d %d", &a, &b);
    if((a>= 1 && a<=100) && (b>= 1 && b<=100))
    {
       for(int i =a; i<=b; i++)
       {
           count++;
       }
       printf("%d\n",count);
    }

    return 0;
}
