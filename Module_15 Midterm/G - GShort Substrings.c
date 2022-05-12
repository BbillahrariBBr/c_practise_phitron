#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[101];
    for(int i =0; i<n; i++)
    {
        scanf("%s",str);
        int len = strlen(str);
        if(len==2)
        {
            printf("%s\n",str);
        }
        else
        {
            for(int j =0; j<len;j+=2)
            {
                printf("%c",str[j]);
            }
            printf("%c\n", str[len-1]);
        }
    }
    return 0;
}
