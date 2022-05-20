#include<stdio.h>
#include<string.h>
//stringCat(char a[], char b[], char out[])
void stringCat(char a[], char b[], char out[])
{
    out = strcat(a,b);
//    int i = 0, j = 0;
//    while (a[i] != '\0') {
//        out[j] = a[i];
//        i++;
//        j++;
//    }
//    i = 0;
//    while (b[i] != '\0') {
//        out[j] = b[i];
//        i++;
//        j++;
//    }
//    out[j] = '\0';
//    puts(out);
}
int main()
{
    char a[101],b[101],out[203];
    printf("Enter first string: ");
    gets(a);

    printf("Enter Second string: ");
    gets(b);

    stringCat(a,b,out);
    puts(out);
//    printf("%s",out);

    return 0;
}

