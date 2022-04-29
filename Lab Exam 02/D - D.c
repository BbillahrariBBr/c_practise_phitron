#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int anton =0;
    int dankin =0;

    for(int i=1; i<=n; i++)
    {
        char game;
        scanf(" %c",&game);
        if(game == 'A')
        {
            anton++;
        }
        if(game == 'D')
        {
            dankin++;
        }
    }
    if(anton>dankin)
    {
        printf("Anton\n");
    }
    else if(anton<dankin)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");

    }
    return 0;
}
