#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int temps;
    int count =0;
    for (int i =1; i<=n; i++)
    {
        scanf("%d", &temps);
        if(temps<0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
