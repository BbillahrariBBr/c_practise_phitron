#include<stdio.h>
int main(){
    int A =5,B=6,C = 10;

    printf("0 a: %d\n",A < 5);
    printf("1 b: %d\n",A+B == 11);
    printf("1 c: %d\n",(A*C)%5 == 0);
    printf("0 d: %d\n",A>=B);
    printf("1 e: %d\n",!(A>B));
    printf("1 f: %d\n",(A<B) && (B<C));
    printf("1 g: %d\n",(A<B) || (B<C));
    printf("1 h: %d\n",(A>=B) || (B<C));
    printf("0 i: %d\n",(A>B) && (B<C));
    printf("1 j: %d\n",!(A%5==0 && B%5==0));
    printf("1 k: %d\n",(A<B && B%4==0) || (C%5==0));
}
