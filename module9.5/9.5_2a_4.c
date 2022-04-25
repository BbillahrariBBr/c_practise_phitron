#include<stdio.h>
int main()
{
    int i =2, j =1;

    int sum =0;
    while(j<=10)
    {
        printf("%d + %d = ",i,sum);
        sum += i;
        printf("%d\n",sum);
        i +=3;
        j++;
    }
    printf("%d \n",sum);
    return 0;
}
