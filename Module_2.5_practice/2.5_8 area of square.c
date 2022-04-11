#include<stdio.h>
int main(){

    int height, width;

    printf("Enter height of rectangle: ");
    scanf("%d", &height);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    int area = height * width;
    printf("Area is %d\n",area);

    int perimeter = 2*(height+width);
    printf("Perimeter is %d",perimeter);


    return 0;

}
