#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((b*2)>= a)
    {
        printf("0\n");
    }
    else{
        printf("%d",a-(b*2));
    }
    return 0;
}
