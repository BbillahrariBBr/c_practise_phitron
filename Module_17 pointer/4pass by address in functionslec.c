#include<stdio.h>
void swap(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}
int main()
{
    int x =20, y = 30;
    swap(&x,&y);
    printf("x = %d, y =%d",x,y);

    return 0;
}

