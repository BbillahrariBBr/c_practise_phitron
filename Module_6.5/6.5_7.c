/*
Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :

50 50 60

Expected Output :

This is an isosceles triangle.

*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a == b &&  a== c)
    {
        printf("This is an Equilateral triangle");
    }
    else if( a == b || b==c || a==c)
    {
        printf("This is an isosceles triangle");
    }
    else{
        printf("This is a Scalene triangle");
    }
    return 0;
}
