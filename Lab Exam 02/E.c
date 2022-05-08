#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x;
    int tdistance =0;
    int adistance =0;
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&x);
    
        for(int i =0; i<=x; i = i+a+c)
        {
            if(x-i <a)
            {
                tdistance = tdistance +(x-i);
            }
            else
            {
                tdistance +=a;
            }
        }

        for(int i =0; i<=x; i = i+d+f)
        {
            if(x-i <d)
            {
                adistance = adistance +(x-i);
            }
            else
            {
                adistance +=d;
            }
        }

        if(tdistance*b == adistance*e)
        {
            printf("Draw\n");
        }
        else if(tdistance*b > adistance*e)
        {
            printf("Takahashi\n");
        }
        else
        {
            printf("Aoki\n");
        }
    return 0;
}
