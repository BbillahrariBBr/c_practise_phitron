#include<stdio.h>

int f(int n, int a[]) {

        int cnt = 0;

        for (int i=0; i<n; i++) {

                if (a[i] == a[0])        cnt++;

        }

        return cnt;

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", arr+i);
    }
    int cnt = f(n,arr);
    printf("%d\n",cnt);

    return 0;
}
