/*
date: 11-04-22
first count the maximum letter, here max letter is 5 so we need 6 string space thats why we write %6s
*/

#include<stdio.h>
int main(){
    //for string message or string format specifier is %s
    printf("%6s","Hello\n");
    printf("%6s","nice\n");
    printf("%6s","to\n");
    printf("%6s","meet\n");
    printf("%6s","you\n");

    //for integer type data
    int a = 32, b = 4586, c = 1234567, d = 123456789;
    printf("%9d\n",a);
    printf("%9d\n",b);
    printf("%9d\n",c);
    printf("%9d\n",d);

    //for int float and char type data
    int e = 2345;
    float f = 23.0;
    double g = 45.0;
    char h = 'h';
    printf("%9d\n",e);
    printf("%9f\n",f);
    printf("%9lf\n",g);
    printf("%9c\n",h);
    return 0;

}
