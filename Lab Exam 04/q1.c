#include<stdio.h>

void square(int number)
{
    printf("Square of %d is %d\n",number, number*number);

}

int main()
{

    int number;
    printf("Enter a Number: ");
    //input a number frm user
    scanf("%d",&number);
    //call function square which takes as input number and output number square
    square(number);
    return 0;
}
