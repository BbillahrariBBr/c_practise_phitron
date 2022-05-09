#include<stdio.h>
int main()
{
    int n,i,max,second ;
    printf("size of array: ");
    scanf("%d",&n);
    int arr[50];
    printf("Input %d array elements: ",n);
    for(i=0; i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int num,pos;
    printf("Input element to insert: ");
    scanf("%d",&num);

    printf("Input position where to insert: ");
    scanf("%d",&pos);


    if(pos>n+1 && pos<=0)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else{
        for(i =n; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
    }
    arr[pos-1] = num;
    n++;
    for(int i = 0; i <n; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}

