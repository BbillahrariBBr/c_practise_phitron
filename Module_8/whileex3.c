// digit reverse 1234 --> 4321
#include<stdio.h>
int main()
{
    int x,reverse =0;
    scanf("%d",&x);
    while(x>0){
        int digit;
        digit = x%10;
        x/=10;
        reverse = (reverse *10)+ digit;
    }
    printf("digit reverse: %d",reverse);
    return 0;
}

