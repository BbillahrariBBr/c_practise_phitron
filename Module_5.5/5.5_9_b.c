#include<stdio.h>
int main()
{
    int sum =0, n =29;
    for(int i=1; i<=n; i=i+2){
            printf("sum: %d + i: %d = ",sum,i);
            sum += i;
            printf("%d\n",sum);
    }
    printf("%d", sum);
    return 0;
}

