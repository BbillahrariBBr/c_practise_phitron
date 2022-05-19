#include<stdio.h>
int arr[1001];
int main()
{
    int n, num;
    scanf("%d",&n);
    for(int i =0; i<n; i++)
    {
        scanf("%d", &num);
        arr[num]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0 || arr[i]>1)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
