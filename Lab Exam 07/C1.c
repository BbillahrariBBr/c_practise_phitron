#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    scanf("%s",st);
    int counter[10] ={0};

    for(int i =0; i<strlen(st); i++)
    {

        char c = st[i];
        if(c >= '0' && c <= '9')
        {
            int digit = c-'0';
            counter[digit]++;
        }

    }
    for(int i =0; i<=9; i++)
    {
        printf("%d ", counter[i]);
    }

    return 0;
}

