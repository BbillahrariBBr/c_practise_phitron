#include<stdio.h>
int main()
{

    char s[101], t[101];
    scanf("%s %s", s,t);

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z' )
        {
            s[i] = s[i]+32;
        }

        if(t[i] >= 'A' && t[i] <= 'Z' )
        {
            t[i] = t[i]+32;
        }
    }
    printf("%s %s\n",s,t);
    return 0;
}
