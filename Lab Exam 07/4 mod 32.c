#include<stdio.h>

int main()

{

    char mystring[] = "abcdefg";

    char *ptr = mystring;

    ptr+=5;

    printf("%s",ptr);

    return 0;

}
