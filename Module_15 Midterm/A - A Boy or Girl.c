#include<stdio.h>
#include<string.h>

int main()
{
    char name[101];
    // input string
    scanf("%s",name);
    int c=0;
    //length count
    int len = strlen(name);
    int count[26]={0};
    //count every letter how many times
    for(int i =0; i<len; i++)
    {
        count[name[i] -'a']++;
    }
    //check total ditinct char
    for(int i =0; i<26; i++)
    {
        if(count[i]!=0)
        {
            c++;
        }
    }
    //compare
    if(c%2)
    {
        printf("IGNORE HIM!\n");
    }
    else{
        printf("CHAT WITH HER!\n");
    }

    return 0;
}
