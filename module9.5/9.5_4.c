#include<stdio.h>
#include<stdbool.h>
int main()
{
    int input;
    printf("Enter 0/1: ");
    scanf("%d",&input);
    do{
        if(input!=0 && input!=1){
            printf("Wrong input. Try Again\n");
            printf("Enter 0/1: ");
            scanf("%d",&input);
        }
        else
        {
            printf("You entered %d\n",input);
            break;
        }

    }while(1);
    return 0;
}
