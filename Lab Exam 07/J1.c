#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[101];
    scanf("%s",str);
    char c;
    bool b = true;
    int len = strlen(str);
    for(int i=1; i<len; i++)
    {
        if(islower(str[i]))
            b = false;
    }
//    printf("%c", toupper(str[0]));
    if (b == true)
    {
        for (int j =0; j<len; j++)
        {
            if(islower(str[j]))
            {
                c = toupper(str[j]);

            }
            else{
                c = tolower(str[j]);
            }
            printf("%c",c);
        }

    }
    else
    {
        printf("%s",str);
    }


    return 0;
}
