#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0; i<10;i++)
    {
        scanf("%d", arr+i);
    }
    int ans = arr[0];

    for(int i=1; i<3; i++)
    {
        ans = arr[ans];
    }
    printf("show ans %d\n",ans);

    return 0;
}


/**
0 1 2 3 4 5 6 7 8 9
4 8 8 8 0 8 8 8 8 8
0 1 2 3 4 5 6 7 8 9
9 0 1 2 3 4 5 6 7 8

0 0
9 4
8 0
7 4



*/
