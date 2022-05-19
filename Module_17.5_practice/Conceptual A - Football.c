#include<stdio.h>
#include<string.h>
int main()
{
    char player[101];
    scanf("%s",player);
    //printf("%s", player);
    int len = strlen(player);
    int count =0;
    if(len<=6)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        for(int i=0; i<len-6;i++)
        {
            if(player[i]==player[i+1]==player[i+2]==player[i+3]==player[i+4]==player[i+5]==player[i+6])
            {
                printf("YES\n");
                return 0;
            }

        }
    }
    printf("NO\n");
    return 0;
}
