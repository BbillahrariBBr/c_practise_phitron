#include<stdio.h>
int main()
{
    int i =50, j =1;

    int sum =0;
    while(j<=20)
    {
        printf("%d + %d = ",i,sum);
        sum += i;
        printf("%d\n",sum);
        i--;
        j++;
    }
    printf("%d \n",sum);
    return 0;
}

