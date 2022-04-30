#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100)
        for(int i =1; i<=n; i++)
        {
            if(i%2 == 1)
            {
                printf("I hate ");
            }
            else{
                printf("I love ");
            }
            if(i==n)
            {
                printf("it");

            }
            else
            {
                printf("that ");
            }

        }
    return 0;
}

