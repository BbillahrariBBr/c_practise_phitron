#include<stdio.h>
#include<string.h>
int main()
{
    char s[16];
    char t[] ="Hello,World!";
    scanf("%s",s);
    //str compare
    int temp = strcmp(s,t);
    if(temp==0)
    {
        printf("AC\n");

        return 0;
    }
    printf("WA\n");

    return 0;
}
