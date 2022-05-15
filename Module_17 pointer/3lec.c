#include<stdio.h>
int main()
{
    // pointer constant
    const int N = 20;
     //change constant N value using pointer
     int *pN = &N;
     *pN = 10;
     printf("%d\n",N);

    return 0;
}


