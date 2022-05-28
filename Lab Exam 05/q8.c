#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//int min( int a , int b)
//{
//    return a<b ? a : b;
//}
void sort(int n, int a[])
{
    for(int steps =0; steps<n; steps++)
    {
        int minelement = a[steps], pos= steps;
        for(int i=steps; i<n; i++)
        {
            if(a[i]< minelement)
            {
                minelement = a[i];
                pos =i;
            }
        }
        swap(&a[steps], &a[pos]);
    }
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
    sort(n,a);
    for(int i =0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

