#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int h = n/100;
    int f = (n%100)/50;
    int tw = ((n%100)%50)/20;
    int t = (((n%100)%50)%20)/10;
    int fi = ((((n%100)%50)%20)%10)/5;
    int two = (((((n%100)%50)%20)%10)%5)/2;
    int o = (((((n%100)%50)%20)%10)%5)%2;
    printf("%d nota(s) de R$ 100,00\n",h);
    printf("%d nota(s) de R$ 50,00\n",f);
    printf("%d nota(s) de R$ 20,00\n",tw);
    printf("%d nota(s) de R$ 10,00\n",t);
    printf("%d nota(s) de R$ 5,00\n",fi);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",o);

    return 0;
}
