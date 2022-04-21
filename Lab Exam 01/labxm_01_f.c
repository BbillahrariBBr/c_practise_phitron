#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int pat1 = (A*100)+(B*10)+C;
    int pat2 = (B*100)+(C*10)+A;
    int pat3 = (C*100)+(A*10)+B;

    if(pat1 == 575 || pat2 ==575 || pat3 == 575)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
