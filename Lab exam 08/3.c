#include<stdio.h>
#include<string.h>
int count_zero(char str[], int len)
{
    int count =0;
    for(int i = 0; i<len; i++)
    {
        if(str[i] == '0')
            count++;
    }
    return count;

}
int main()
{
    char binstr[101];
    scanf("%s",binstr);
    int len = strlen(binstr);
    int zero = count_zero(binstr,len);
    printf("%d",zero);

    return 0;
}
