#include<stdio.h>
int main(){
    int inches;
    printf("Enter your Heights in inches: ");
    scanf("%d",&inches);
    printf("your Height is %d feets %d inches", inches/12,inches%12);
    return 0;

}
