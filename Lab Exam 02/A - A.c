#include<stdio.h>
int main()
{
    int N,K,A;
    int count;
    scanf("%d %d %d", &N, &K, &A);

    if(A>= 1 && A<=N)
    {
        for(int i =2; i<=K; i++)
        {
            if(A==N)
            {
                A =1;
            }
            else{
                A +=1;
            }
        }

    }
    printf("%d\n",A);
    return 0;
}
