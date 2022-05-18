#include<stdio.h>

int makePositive(int a) {
	if (a < 0) {
		a = -a;
	}
	return a;
}
int main()
{
    printf("%d",makePositive(-100));
    return 0;
}

