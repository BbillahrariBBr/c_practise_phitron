#include<stdio.h>
int main()
{
    int n,fish;
    scanf("%d",&n);

    int arr[8]={0};
    for(int i =0; i <n; i++)
    {
       scanf("%d", &fish);
       arr[fish]++;

    }
    for(int i =1; i <=7; i++)
    {
       printf("%d\n",arr[i]);

    }
    return 0;
}
