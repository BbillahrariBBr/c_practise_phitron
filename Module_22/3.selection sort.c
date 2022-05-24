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
        //find min element
        int minElement = a[steps], pos = steps;
        for(int i=steps; i<n; i++)
        {
            if(a[i]<minElement)
            {
                minElement = a[i];
                pos =i;
            }
//            minElement = min(minElement,a[i]);
        }
        swap(&a[steps],&a[pos]);
        printf("Steps: %d\n", steps);
        printf("Min: %d at pos: %d\n",minElement,pos);
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
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

5, 1, 3, 4, 2
1, 5, 3, 4, 2
1, 2, 3, 4, 5
1, 2, 3, 4, 5
1, 2, 3, 4, 5

*/
