#include<stdio.h>
#include<string.h>
int main()
{
    char ar[10];
    fgets(ar,10,stdin);
    int size = strlen(ar);
    ar[size-1]='\0';
    printf("%s - Hello\n",ar);
    //here when i nput using fgets thn its count enter a char
    // using below code we fixed our problem


    printf("%d\n", size);
    printf("second size %d\n", strlen(ar));
    return 0;
}
