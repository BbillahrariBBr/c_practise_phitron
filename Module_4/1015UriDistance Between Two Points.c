//Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:
#include<stdio.h>
#include<math.h>

int main()
{
    double x1, y1;
    scanf("%lf %lf",&x1,&y1);

    double x2, y2;
    scanf("%lf %lf",&x2,&y2);
    double x_axis = x2-x1;
    double y_axis = y2-y1;
    double result = sqrt((x_axis*x_axis)+ (y_axis*y_axis));
    printf("%.4lf\n",result);
    return 0;
}
