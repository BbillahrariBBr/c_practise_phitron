#include<stdio.h>
int main()
{
    int k,n,w, sum =0;
    scanf("%d %d %d", &k,&n,&w);
    for(int i =1; i<=w; i++)
    {
        sum = sum + (i*k);
    }
    int res = sum -n;
    if(res<1){
        printf("0\n");
    }
    else{
        printf("%d\n",res);
    }


    return 0;
}
