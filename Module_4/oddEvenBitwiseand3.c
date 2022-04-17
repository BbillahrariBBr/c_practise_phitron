#include<stdio.h>
int main(){

    int number;
    scanf("%d",&number);

    if((number & -number) == 1){
        printf("%d is odd",number);

    }
    else
    {
       printf("%d is even",number);
    }
    return 0;
}

