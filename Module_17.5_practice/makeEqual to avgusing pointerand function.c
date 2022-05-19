#include<stdio.h>

void makeEqual(int *pa, int *pb) {
	int av = (*pa+*pb)/2;
	*pa = *pb = av;
}
int main()
{
    int a = 10, b=12;
    makeEqual(&a, &b);
    printf("%d %d",a,b);
    return 0;
}
