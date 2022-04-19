#include<stdio.h>
int main()
{
    int a,b;
    char op;
    scanf("%d %c %d", &a,&op, &b);
    //printf("%d %c %d", a, op, b);
    switch(op)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        if(!b==0)
        {
            printf("%.3f", (float) a/ (float) b);
        }
        else{
            printf("Cannot divide by 0");
        }
        break;
    case '%':
        if(!b==0)
        {
            printf("%d", a%b);
        }
        else{
            printf("Cannot divide by 0");
        }
        break;
    default:
        printf("Op not found");

    }
    return 0;
}
