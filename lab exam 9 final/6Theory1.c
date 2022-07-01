#include<stdio.h>
void change_values(int ar[], int size, int l, int r)
{
    for(int i =l; i<=r; i++)
    {
        ar[i] =0;
    }

}
int main()
{
    int n,l,r;
    scanf("%d",&n);
    int ar[n];
    for(int i =0; i<n;i++)
    {
        scanf("%d", ar+i);
    }
    printf("enter value L and R: ");
    scanf("%d %d",&l,&r);
    change_values(ar,n,l,r);
    for(int i =0; i<n;i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}
