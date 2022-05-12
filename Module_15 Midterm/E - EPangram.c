#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d",&n);
    char name[n+1];

    scanf("%s",name);

    int count[26]={0};

    for(int i=0; i<n; i++)
    {
        if(name[i] >= 'A' && name[i] <= 'Z' )
        {
            count[name[i]-'A'] = 1;
        }
        if(name[i] >= 'a' && name[i] <= 'z' )
        {
            count[name[i]-'a'] = 1;
        }

    }



    for(int i =0; i<26; i++)
    {
        if(count[i]==0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}
