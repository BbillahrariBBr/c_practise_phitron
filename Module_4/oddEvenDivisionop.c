#include<stdio.h>
int main(){

    int number;
    scanf("%d",&number);

    if((number/2)*2 == number){
        printf("%d is even",number);

    }
    else
    {
       printf("%d is odd",number);
    }
    return 0;
}
