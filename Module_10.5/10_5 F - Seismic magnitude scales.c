#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    int res;
    scanf("%d %d", &a, &b);

        if(a>b)
        {
            int sub = a-b;
            res = pow(32,sub);
            printf("%d\n",res);
        }

        else if(a== b || a<b)
        {
            printf("1\n");
        }

}
