#include<stdio.h>
int main()
{

    int n,on=0,cnt=0;
    int nmbr;
    scanf("%d",&n);
    for(int i =1; i<=n; i++)
    {

        scanf("%d",&nmbr);
        if(nmbr<0)
        {
            if(!(on>=1)) cnt++;
            else on--;

        }
        else on+=nmbr;
    }
    printf("%d\n",cnt);
    return 0;
}
