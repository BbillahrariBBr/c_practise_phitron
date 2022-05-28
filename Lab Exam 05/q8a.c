//#include<stdio.h>
//#include<stdbool.h>
//bool is_sorted(int n, int a[])
//{
//    int cnt =0;
//    for(int i =0; i+1<n; i++)
//    {
//        if(a[i]>a[i+1]) cnt++;
//    }
//    if(cnt == n-1) return true;
//    else return false;
//}
//void swap(int *a, int *b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void sort(int n, int a[])
//{
//    for(int steps =0; steps<n; steps++)
//    {
//        int mxelement = a[steps], pos= steps;
//        for(int i=steps; i<n; i++)
//        {
//            if(a[i]> mxelement)
//            {
//                mxelement = a[i];
//                pos =i;
//            }
//        }
//        if(is_sorted(n,a)) break;
//        if((&a[steps] == &a[pos])) continue;
//        else{
//            swap(&a[steps], &a[pos]);
//            printf("Swap %d %d\n",steps, pos);
//        }
//
//
//
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    for(int i =0; i<n; i++)
//    {
//        scanf("%d", a+i);
//    }
//    sort(n,a);
//    for(int i =0; i<n; i++)
//    {
//        printf("%d ",a[i]);
//    }
//
//    return 0;
//}
//


#include<stdio.h>
#include<stdbool.h>
bool is_sorted(int n, int a[])
{
    int cnt =0;
    for(int i =0; i+1<n; i++)
    {
        if(a[i]>a[i+1]) cnt++;
    }
    if(cnt == n-1) return true;
    else return false;
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
        int maxelement = a[steps], pos= steps;
        for(int i=steps; i<n; i++)
        {
            if(a[i]> maxelement)
            {
                maxelement = a[i];
                pos =i;
            }
        }
        if(is_sorted(n,a)) break;
        if((&a[steps] == &a[pos])) continue;
        else{
            swap(&a[steps], &a[pos]);
            printf("Swap %d %d\n",steps, pos);
        }



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
