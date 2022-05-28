#include<stdio.h>
#include<stdbool.h>
bool is_sorted(int n, int a[])
{
    int cnt =0;
    for(int i =0; i+1<n; i++)
    {
        if(a[i]>a[i+1]) cnt++;
    }
    if(cnt == n-1) return true;
    else return false;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", a+i);
    }
    bool res = is_sorted(n,a);
    if (res ==1) printf("TRUE\n");
    else printf("FALSE\n");

    return 0;
}

