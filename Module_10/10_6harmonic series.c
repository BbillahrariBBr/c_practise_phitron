#include<stdio.h>
int main()
{
    float h=1;
    int n;
    scanf("%d",&n);
    printf("%d terms of harmonic series is\n1+ ",n);
    for(int i =2; i<=n; i++)
    {
        printf("1/%d ",i);

        h = h + (1/(float)(i));
//        printf("afte eq h%f\n",(1/i));

        if(i<n)
        {
            printf("+ ");
        }


    }
    printf("\n%d terms of harmonic series sum is %.4f",n,h);
    return 0;
}
