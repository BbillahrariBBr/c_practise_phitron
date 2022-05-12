#include<stdio.h>
int main()
{
    char digit[100];
    scanf("%s", digit);
    int len = strlen(digit);
    int count=0;
    //count good digits
    for(int i=0; i<len;i++)
    {
        if(digit[i]=='4' || digit[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");

    return 0;
}
