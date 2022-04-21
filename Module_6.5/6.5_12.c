/*

 Write a C program to find all roots of a quadratic equation (ax^2 + bx + c = 0). Mention the number of roots and Then list all of them.
Example

Input

Input a: 8

Input b: -4

Input c: -2

Output

There are two roos.

Root1: 0.80

Root2: -0.30

*/

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,pr;
    scanf("%lf %lf %lf",&a,&b,&c);
    pr = (b*b)-(4*a*c);
    if(pr>0 && a!=0){
        double r1,r2;
        pr = sqrt(pr);
        r1 = (-b + pr)/(2*a);
        r2 = (-b -pr)/(2*a);
        printf("There are two roots\n");
        printf("Root1: %.3lf\n",r1);
        printf("Root2: %.3lf\n",r2);
    }
    else
    {
        printf("\nImpossible to find the roots.\n");
    }
    return 0;
}
