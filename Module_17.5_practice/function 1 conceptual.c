#include<stdio.h>>
int main()
{
    int a = 10;
    int *pa = &a;
    int *pAA = &pa;

    printf("A er value- %d\n",a);
    printf("A er  addres- %d\n",&a);
    printf("p er  Value(a er address)- %d\n",pa);
    printf("p er  Adress er balueValue(a er value)- %d\n",*pa);
    printf("p er  Adress- %d",&pa);

    printf("pAA er  Value(a er address)- %d\n",pAA);
    printf("pAA er  Adress er balueValue(a er value)- %d\n",*pAA);
    printf("pAA er  Adress- %d\n",&pAA);



    return 0;
}
