#include<stdio.h>
int areaRectangle(int a, int b)
{
    int area;
    return area = a*b;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int area = areaRectangle(x,y);
    printf("%d",area);
}
