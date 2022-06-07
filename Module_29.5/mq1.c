#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    printf("%d %d",arr[arr[3]-1],arr[arr[3]+1]);


    return 0;
}
