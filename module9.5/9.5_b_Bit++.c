#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    char op[4];
    for(int i =1; i<=n ;i++){
        scanf("%s",&op);
        if(op[1] == '+'){
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d",x);
    return 0;
}
