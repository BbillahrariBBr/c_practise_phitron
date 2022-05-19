#include<stdio.h>
#include<string.h>
//if declare any array in globally its all value automatically declare 0
int freq[2001];
int main()
{
    int n, num;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num);

        freq[num]++;
    }
    for(int i =0; i<=2000; i++)
    {
        if(freq[i] == 0)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
}
