#include<stdio.h>
int main()
{
    int x;
    int res;
    int count =0;
    scanf("%d",&x);
    if(x>=0 && x <=100)
    {
        if(x>=0 && x <40)
        {
            res = 40-x;
        }
        else if(x>=40 && x<70)
        {
            res = 70-x;
        }
        else if (x>=70 && x <90)
        {
            res = 90-x;
        }
        else{
            count =1;
        }
    }
    if(count ==0){
        printf("%d\n",res);
    }
    else{
        printf("expert\n");
    }
    return 0;
}
