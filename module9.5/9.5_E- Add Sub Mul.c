#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d %d",&a, &b);
    int aPlusb = a+b;
    int aMinb = a-b;
    int aMulb = a*b;
    int res = (aPlusb >aMinb && aPlusb>aMulb) ? (aPlusb): ((aMinb>aMulb)? aMinb :aMulb);
    printf("%d\n",res);
    return 0;
}
