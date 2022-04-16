#include<stdio.h>
int main()
{
    int num1, num2;
    char op;
    int result;
    scanf("%d %c %d", &num1,&op,&num2);
    switch(op){
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            printf("unknown op");

    }
    printf("%d", result);
    return 0;
}

