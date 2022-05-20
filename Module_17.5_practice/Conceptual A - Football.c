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
            if(player[i]== '1'  && player[i+1]== '1'  && player[i+2]== '1'  && player[i+3]== '1'  && player[i+4]== '1'  && player[i+5]== '1'  && player[i+6] == '1')
            {
                printf("YES\n");
                return 0;
            }

            if(player[i]== '0'  && player[i+1]== '0'  && player[i+2]== '0'  && player[i+3]== '0'  && player[i+4]== '0'  && player[i+5]== '0'  && player[i+6] == '0')
            {
                printf("YES\n");
                return 0;
            }

        }
    }
    printf("NO\n");
    return 0;
}
