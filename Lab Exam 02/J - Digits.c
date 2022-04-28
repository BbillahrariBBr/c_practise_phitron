#include<stdio.h>
int main()
{
    int abc;
    int res;
    scanf("%d",&abc);
    int x = abc%10;
    int y = (abc/10)%10;
    int z = abc/100;
//    printf("x - %d, y- %d, z- %d",x,y, z);
    if(x!=0 && y!=0 && z!=0)
    {
        if(x==y && y==z)
        {
            res = abc*3;
        }
        else
        {
            res = abc+((y*100)+(x*10)+z) + ((x*100)+(z*10)+y);

        }

    }
    printf("%d\n",res);
    return 0;
}
