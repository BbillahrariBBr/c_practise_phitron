#include<stdio.h>
#include<string.h>
int main()
{
    int n,comp=0;
    scanf("%d ",&n);
//    getchar();

    char name[n][25];
    for(int i = 0; i<n; i++)
    {
        gets(name[i]);
        for(int j=0; j<i ; j++)
        {
            if(strcmp(name[i], name[j])==0)
                comp=1;

        }
    }
    if(comp)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
