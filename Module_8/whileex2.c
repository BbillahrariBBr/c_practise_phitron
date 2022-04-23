// digit sum 1234 =  1 + 2 +3 +4 = 10
#include<stdio.h>
int main()
{
    int x,sum =0;
    scanf("%d",&x);
    while(x>0){
        int digit;
        digit = x%10;
        x/=10;
        sum +=digit;
    }
    printf("digit sum: %d",sum);
    return 0;
}
