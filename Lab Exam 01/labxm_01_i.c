#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int pat1= a+b;
    int pat2= b+c;
    int pat3= c+a;
    if(pat1<pat2 && pat1< pat3){
            printf("%d\n",pat1);
    }
    else if(pat2<pat3 && pat2< pat1){
            printf("%d\n",pat2);
    }
    else{
        printf("%d\n",pat3);
    }
    return 0;
}
