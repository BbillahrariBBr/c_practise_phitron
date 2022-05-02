#include<stdio.h>
#include<math.h>
int main()
{

    long long int n;
    int count =0;
    scanf("%lld", &n);
    for(int i =2; i<=sqrt(n);i++)
    {
        if(n%i ==0)
        {
            count =1;
            break;
        }
    }
    if(n<=1)
        count =1;
    if(count==0)
    {
        printf("Yes");
    }
    else printf("No");
    return 0;
}
