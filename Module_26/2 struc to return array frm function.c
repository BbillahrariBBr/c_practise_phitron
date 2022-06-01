#include<stdio.h>
struct ArraayHolder{
    int array[100];
};
// code fproblem fixed korte hobe
// function
struct ArraayHolder makenArray (int n)
{
    struct ArraayHolder ans;
    for(int i=0; i<n; i++)
    {
        ans.array[i] = i+1;
    }
};
int main()
{
    int n =10;
    struct ArraayHolder ans = makenArray(n);
    for(int i=0; i<n; i++)
    {
        printf("%d\n",ans.array[i]);
    }


    return 0;
}
