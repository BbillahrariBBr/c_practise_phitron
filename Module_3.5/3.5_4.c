/*
Input

Enter principle: 1200

Enter time: 2

Enter rate: 5.4

Output

Simple Interest = 129.600006

Principal + Interest = 1329.6

SI = (P*T*R)/100
           Hint: Formula to find simple interest:

*/

#include<stdio.h>
int main()
{
    int p;
    printf("Enter principle: ");
    scanf("%d",&p);

    int t;
    printf("Enter time: ");
    scanf("%d",&t);

    float r;
    printf("Enter rate: ");
    scanf("%f",&r);

    float si = (p*t*r)/100;
    printf("Simple Interest = %f\n",si);
    printf("Principal + Interest = %.1f",si+p);
    return 0;
}
