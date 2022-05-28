#include<stdio.h>
int is_sorted(int n, int a[])
{
    int count =0;
    for(int i =0; i+1<n; i++)
    {
        if(a[i]>a[i+1]) count++;
    }
    if(count == n)
    {
        return 1;
    }
    else{
            return 0;
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[])
{
    for(int steps =0; steps<n; steps++)
    {
        int minelement = a[steps], pos= steps;
        for(int i=steps; i<n; i++)
        {
            if(a[i]> minelement)
            {
                minelement = a[i];
                pos =i;
            }
        }
        swap(&a[steps], &a[pos]);
        if(is_sorted(n,a)) break;

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(n,a);
    for(int i =0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

