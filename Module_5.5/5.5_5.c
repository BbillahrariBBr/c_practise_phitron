#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if (mark <0 || mark > 100){
        printf("%d is invalid mark, plz enter correct one", mark);
    }
    else{
        if(mark>= 0 && mark <=40 ){
            printf("Your grade is F");
        }
        else if(mark>40 && mark <50 ){
            printf("Your grade is D");
        }
        else if(mark> 50 && mark <60 ){
            printf("Your grade is C");
        }
        else if(mark>60 && mark <70 ){
            printf("Your grade is B");
        }
        else if(mark> 70 && mark < 80 ){
            printf("Your grade is A");
        }
        else{
                printf("Your grade is A+");
        }
    }

    return 0;
}
