#include<stdio.h>
struct Fraction{
    int num;
    int denum;
};
// not complete
void print(struct Fraction f)
{
    printf("%d/%d",f.num,f.denum);
}
struct Fraction add ()
int main()
{
    struct Fraction half ={2,4};
    print(half);
    return 0;
}
