#include<stdio.h>
int main()
{
    int i =1;
    int sum =0;
    while(i<=29)
    {
//        printf("%d + %d = ",i,sum);
        sum += i;
//        printf("%d\n",sum);
        i +=2;
    }
    printf("%d \n",sum);
    return 0;
}
