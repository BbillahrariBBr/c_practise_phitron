#include<stdio.h>
int main()
{
    int sum =0, n =1;
    for(int i=50; n!=21 ; i--){
            printf("sum: %d + i: %d = ",sum,i);
            sum += i;
            printf("%d times- %d\n",n,sum);
            n++;
    }
    printf("%d", sum);
    return 0;
}


