#include<stdio.h>
#include<string.h>
int main()
{
    char str[51];
    scanf("%s",str);
    int count =0, countA =0;
    int len = strlen(str);
    int i = len;
    while(i--)
    {
        if(str[i] =='a')
            countA++;
        else
            count++;
    }

    if(countA >count)
        printf("%d",len);
    else
        printf("%d",2*countA-1);
    return 0;
}
