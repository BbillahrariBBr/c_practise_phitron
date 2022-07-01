#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d", ar+i);
    }
    int freq[10] ={0};
    for(int i=0; i<n; i++)
    {
        int val =ar[i];
        freq[val]++;
    }

    for(int val=0; val<10; val++)
    {
        printf("value-> %d, freq-> %d\n",val,freq[val]);
    }

    return 0;
}
