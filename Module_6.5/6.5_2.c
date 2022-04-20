/*
Write a C program that accepts two integers and prints true if either one is 5 or their sum or difference is 5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);

    if(number1 == 5 || number2 ==5 || number1+number2 == 5 || abs(number1-number2) == 5){
        printf("True");
    }
    else{
        printf("false");
    }
    return 0;
}
