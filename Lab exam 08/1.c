#include<stdio.h>
float make_sum(float a, float b)
{
    return a+b;
}
int main()
{
    float res = make_sum(5.5, 6.3);
    printf("%f", res);

    return 0;
}
