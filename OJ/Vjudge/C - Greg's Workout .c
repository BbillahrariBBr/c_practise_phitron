#include<stdio.h>
int main()
{
    int n,a,chest=0,biceps=0,back=0;
    scanf("%d",&n);
    for(int i =1; i<=n; i++)
    {
        scanf("%d",&a);
        if(i%3==1)
        {
            chest +=a;
        }
        else if (i%3 ==2)
        {
            biceps +=a;
        }
        else
        {
            back +=a;
        }
    }
    if(chest >biceps && chest >back)
    {
        printf("chest\n");
    }
    else if(biceps > chest && biceps >back)
    {
        printf("biceps\n");

    }
    else
    {
        printf("back\n");
    }
    return 0;
}
