#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=0; cs<t; cs++){
        int r,e,c;
        scanf("%d %d %d",&r,&e, &c);
        int profit = e-c;
        if(profit > r){
            printf("advertise\n");
        }
        else if(profit == r){
            printf("does not matter\n");
        }
        else{
            printf("do not advertise\n");
        }
    }
    return 0;
}
