#include<stdio.h>
void pass_by_refernce(int *a)
{
    *a =5;

}
int main()
{
    int a = 12;
    pass_by_refernce(&a);
    printf("a  value is change  %d \n",a);
    return 0;
}
