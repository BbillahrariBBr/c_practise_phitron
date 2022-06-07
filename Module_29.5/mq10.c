#include<stdio.h>
int main()
{
    int arr[12];

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[2]));
    int res=sizeof(arr)/sizeof(arr[2]);
    printf("%d",res);

    return 0;
}
