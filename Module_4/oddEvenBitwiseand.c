#include<stdio.h>
int main(){

    int number;
    scanf("%d",&number);

    if((number & 1)  == 0){
        printf("%d is even",number);

    }
    else
    {
       printf("%d is odd",number);
    }
    return 0;
}