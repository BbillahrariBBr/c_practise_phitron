#include<stdio.h>
int main()
{
    int n;
    double x = 0.0;
    scanf("%d", &n);
    for(int i =1; i<=n; i++)
    {
        int d;
        scanf("%d",&d);
        x = x+d;

    }
    double denom = n*1.0;
    double res = x/denom;
    printf("%.12lf\n",res);
    return 0;
}

