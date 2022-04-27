#include<stdio.h>
int main()
{

    int number,result=0;

    scanf("%d",&number);
    int temp = number;

    while(number>0){
        result = result+ (number%10);
//        printf("%d\n", result);
        number /= 10;
//        printf("%d\n",number);
    }
    printf("Sum of number %d is %d",temp,result);

    return 0;
}
