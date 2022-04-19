#include<stdio.h>
int main()
{
    int limit, due=0, n_limit;
    scanf("%d",&limit);
    n_limit = limit;
    int month;
    scanf("%d",&month);
    for(int i = 1; i <=month; i++){
        int used;
        scanf("%d", &used);
        int month_limit = limit + due;
        due = month_limit -used;
    }
    printf("%d",due + limit);
    return 0;
}
