#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int water_left = A-B;
    int water_pored = water_left < C ?water_left : C;
    C -= water_pored;
    printf("%d",C);
    return 0;
}
