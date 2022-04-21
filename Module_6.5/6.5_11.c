/*
Write a program in C that takes two inputs x and y and prints all numbers that are multiples of x but divisors of y.  If there are none, print no such integers.
Test Data :

5 20

Expected Output :

5 10 20


Test Data :

6 20

Expected Output :

No such integers

*/

#include<stdio.h>
int main()
{
    int x, y,temp =0;
    scanf("%d %d", &x, &y);
    for(int i =1; i<=y; i++){
        int mult = x*i;
        if(y% mult == 0){
            printf("%d\n", mult);
            temp++;
        }
    }
    if (temp == 0)
    {
        printf("No such integers\n");
    }
    return 0;
}
