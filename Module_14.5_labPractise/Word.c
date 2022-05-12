#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i;
    scanf("%s", s);
    int len = strlen(s);
    int upper =0, lower =0;
    for(i=0; i<len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            lower++;
        }
    }
    upper = len-lower;
    if(upper<=lower)
    {
           for(i=0; i<len;i++)
           {
               if(s[i]>= 'A' && s[i]<='Z')
               {
                   s[i] = s[i]+32;
               }
           }


    }
    else
    {
        for(i=0;i<len;i++)
           {
               if(s[i]>= 'a' && s[i]<='z')
               {
                   s[i] = s[i]-32;
               }
           }
    }
    printf("%s\n",s);
    //printf("upper case: %d and lower case: %d",upper, lower);

    return 0;
}
