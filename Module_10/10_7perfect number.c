#include<stdio.h>
int main()
{
    int start_range, end_range, s =0;
    printf("Input the starting range or number :");
    scanf("%d",&start_range);

    printf("Input the ending range of number : ");
    scanf("%d",&end_range);
    printf(" The Perfect numbers within the given range : ");

    for(int i =start_range; i<=end_range; i++)
    {
//        printf("for i = %d \n",i);
        for(int j=1; j<=i/2 ; j++)
        {
            if(i%j == 0)
            {

                s += j;
//                printf("%d s is and j is %d\n",s,j);
            }
        }
        if(s == i)
        {
            printf("%d, ",i);
        }
        s =0;

    }
    return 0;
}
