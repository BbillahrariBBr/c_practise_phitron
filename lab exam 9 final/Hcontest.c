#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    scanf("%s",st);
    int counter[4] ={0};
    int len = strlen(st);
    for(int i =0; i<len; i++)
    {

        char c = st[i];
        if(c >= '1' && c <= '3')
        {
            int digit = c-'0';
            counter[digit]++;
        }

    }
    if(len ==1)
        printf("%s",st);
    else{
       for(int i =1; i<=3; i++)
        {
            printf("%d ", counter[i]);
        }
    }


    return 0;
}
