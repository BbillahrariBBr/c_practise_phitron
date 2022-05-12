#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d %d", &n,&r);
    int arr [n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", arr+i);
    }
    for(int i =0; i<n; i++)
    {
        printf("%d ",arr[(i+r)%n]);
    }
    printf("\n");
    return 0;
}
