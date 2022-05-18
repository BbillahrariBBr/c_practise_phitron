#include<stdio.h>

void makePositive(int *pa) {
	if (*pa < 0) {
		*pa = -*pa;
	}

}
int main()
{
    int a = -10;
    makePositive(&a);
    printf("%d",a);
    return 0;
}
