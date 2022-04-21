#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    float multiple, sum =0;
    for(int i=1; i<=number; i++){
        float a, b;
        scanf("%f %f",&a,&b);
        multiple = a*b;
        sum += multiple;
    }
    printf("%.3f",sum);
    return 0;
}
