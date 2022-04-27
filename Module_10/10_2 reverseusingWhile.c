#include<stdio.h>
int main()
{

    int number,result=0;

    scanf("%d",&number);
    int temp = number;

    while(number>0){
        result = (result*10) + (number%10);
//        printf("%d\n", result);
        number /= 10;
//        printf("%d\n",number);
    }
    printf("%d reverse is %d",temp,result);

    return 0;
}
