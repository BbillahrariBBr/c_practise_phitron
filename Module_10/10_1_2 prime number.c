#include<stdio.h>
int main()
{
    int count =0;
    int prime =0;
    int not_prime =0;
//    scanf("%d",&number);
    for(int number =100;number<=200; number++)
    {
        for(int i=2;i*i<=number;i++)
        {
            if(number %i == 0)
            {
               count =1;
               break;

            }
        }
        if(count == 0)
        {
            printf("%d is prime\n",number);
            prime++;
        }
        else{
            printf("%d is not prime\n",number);
            not_prime++;
        }
        count =0;

    }
    printf("\n\ntotal prime number is this range: %d\n",prime);
    printf("total Not prime number is this range: %d\n",not_prime);

    return 0;
}
