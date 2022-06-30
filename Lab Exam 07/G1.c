#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char sub[5] = {'h','e','i','d','i'};
    while(gets(str))
    {
        int len = strlen(str);
        int i, count =0;
        for(i =0; i<len; i++)
        {
            if(str[i] == sub[count])
            {
                count++;
                if(count==5)
                    break;
            }
        }
        if (count ==5)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
