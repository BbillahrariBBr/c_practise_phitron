#include<stdio.h>
int main()
{

    int terms;
    scanf("%d", &terms);
    int t1 =0,  t2 =1;
    int next_number = t1+t2;
    //first 2 nmbr
    printf("Fibonacci Numbers-->\n %d, ",t2);
    for(int i = 2; i<=terms; i++)
    {
        printf("%d, ", next_number);
        t1 = t2;
        t2 = next_number;
        next_number = t1+t2;
    }
    return 0;
}
