#include<stdio.h>
#include<string.h>
//stringCat(char a[], char b[], char out[])
void stringCat(char a[], char b[], char *out[])
{
    *out = strcat(a,b);
//    puts(out);
}
int main()
{
    char a[101],b[101],out[203];
    printf("Enter first string: ");
    gets(a);

    printf("Enter Second string: ");
    gets(b);
    char *ptr = &out[0];

    stringCat(a,b,*ptr);
    printf("%s",*ptr);

    return 0;
}
