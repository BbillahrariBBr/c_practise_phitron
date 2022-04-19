#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if((number/2)*2 == number){
        printf("%d is Even",number);
    }
    else{
        printf("%d is Odd",number);
    }
    return 0;
}
