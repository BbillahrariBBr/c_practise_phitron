#include<stdio.h>
#include<string.h>
int main()
{

    char st[101];
    scanf("%s",st);
    int len = strlen(st);

    int m=0,n=0,o=0;
    for(int i =0; i<len; i++)
    {
        if(st[i]=='1')m++;
        if(st[i]=='2')n++;
        if(st[i]=='3')o++;

    }
    if(len ==1)
        printf("%s",st);
    else{
            for(int i = 0; m||n||o; i = i+2)
            {
                if(m!=0)
                {
                    st[i]= '1';
                    --m;
                }
                else if(m==0 && n!=0)
                {
                    st[i]= '2';
                    --n;
                }
                else if(m==0 && n==0 && o!=0)
                {
                    st[i]= '3';
                    --o;
                }
                if(st[i+1]!='\0')
                {
                   st[i+1] = '+';
                }

            }
            printf("%s",st);
    }


    return 0;
}
