#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a;
    while(true)
    {
        scanf("%d",&a);
        if(a> 0 ){
            printf("correct input");\
            break;
        }
        else{
            printf("number must be positive and greater than 0\n");
        }
    }
    return 0;
}
