#include<stdio.h>
int main()
{
    // using for loop 30 42
    int a,b,gcd = 1;
    scanf("%d %d",&a,&b);
    for(int g=1; g<=a && g<=b; g++)
    {
        //printf("%d\n",g);
        if(a%g ==0 && b%g ==0){
            printf("comon factor: %d\n",g);
            gcd = g;
        }
    }
    printf("GCS is: %d\n",gcd);
    return 0;
}
