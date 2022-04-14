#include<stdio.h>
int main()
{
    int H,W,h,w;
    scanf("%d %d %d %d",&H,&W,&h,&w);
    int white = (H-h)*(W-w);
    printf("%d",white);
    return 0;
}

