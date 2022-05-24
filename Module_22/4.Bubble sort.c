#include<stdio.h>
int min(int a, int b)
{
    return a<b ? a:b;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int n, int a[])
{
    //steps
    for(int steps = 0; steps<n; steps++)
    {
        for(int i=0; i+1<n; i++)
        {
            if(a[i]>a[i+1])
                swap(&a[i],&a[i+1]);

            printf("Steps: %d\n", steps);
            for(int i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
        }
        //if(is_sorted(n,a)) break next module xm

        printf("\n");
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n;i++)
    {
        scanf("%d",a+i);
    }
    sort(n,a);
    for(int i =0; i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    return 0;
}
/**
5, 2, 4, 1, 3
2, 5, 4, 1, 3
2, 4, 5, 1, 3
2, 4, 1, 5, 3
2, 4, 1, 3, 5
2, 4, 1, 3, 5
2, 1, 4, 3, 5
2, 1, 3, 4, 5
2, 1, 3, 4, 5
1, 2, 3, 4, 5

*/
