//Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
#include<stdio.h>
int main()
{
    int X;
    float Y;
    scanf("%d %f",&X, &Y);
    float avg = X/Y;
    printf("%.3f km/l\n",avg);
    return 0;
}
