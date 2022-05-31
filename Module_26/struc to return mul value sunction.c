#include<stdio.h>
struct Result{
    int vagfol;
    int vagsesh;
};

// function
struct Result divide(int x, int y)
{
    return (struct Result){x/y, x%y};
};
int main()
{
    int a=10, b =3;
    struct Result result = divide(a,b);
    printf("%d %d\n",result.vagfol, result.vagsesh);

    return 0;
}
