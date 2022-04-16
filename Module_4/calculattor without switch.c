#include<stdio.h>
int main()
{
    int num1, num2;
    char op;
    int result;
    scanf("%d %c %d", &num1,&op,&num2);
    if(op == '+' ){
        result = num1+ num2;

    }
    else if(op == '-' ){
        result = num1- num2;

    }
    else if(op == '*' ){
        result = num1* num2;

    }
    else if(op == '/' ){
        result = num1 / num2;

    }
    printf("%d", result);
    return 0;
}
