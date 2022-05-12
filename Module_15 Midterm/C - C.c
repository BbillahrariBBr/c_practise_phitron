#include<stdio.h>
int main()
{

    int n,count=0;
    scanf("%d", &n);
    char str[n+1];
    scanf("%s",str);
    for(int i=0; i<n; i++)
    {
        if(str[i]== str[i+1])
        {
           count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
