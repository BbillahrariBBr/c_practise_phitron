#include<stdio.h>
int main()
{
    int n,pass_number,count =0;
    scanf("%d %d", &n, &pass_number);
    for(int i =1; i<=n; i++)
    {
        int number;
        scanf("%d", &number);
        if(number < pass_number)
        {
            count++;
        }
    }
    printf("%d",count);
}
