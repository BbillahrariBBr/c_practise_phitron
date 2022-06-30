#include<stdio.h>
int main()
{
    int dgt,n=0,z=0;
    scanf("%d",&dgt);
    char str[100001];
    scanf("%s",str);
    int i;
    for(i=0; i<dgt; i++)
    {
        if(str[i]=='n') n++;
        else if(str[i]=='z') z++;
    }
    while(n--) printf("1 ");
    while(z--) printf("0 ");
    printf("\n");

    return 0;
}
