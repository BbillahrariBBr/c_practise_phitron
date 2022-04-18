#include<stdio.h>
int main()
{
    int spent_time,avg_speed;
    scanf("%d %d", &spent_time, &avg_speed);
    float fuel_spent = (float)(spent_time * avg_speed)/12;
    printf("%.3f\n",fuel_spent);

    return 0;
}
