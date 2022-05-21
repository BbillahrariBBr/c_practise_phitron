#include<stdio.h>
#include<string.h>
void stringCat(char a[], char b[], char out[])
{
  int length, j;
  length = 0;
  while (a[length] != '\0') {
    ++length;
  }

  for (j = 0; b[j] != '\0'; ++j, ++length) {
    a[length] = b[j];
  }

  a[length] = '\0';
  out = a;
  printf("%s",out);
}
int main()
{
    char a[101],b[101],out[200];
    scanf("%s",a);
    scanf("%s",b);

    stringCat(a,b,out);
    return 0;
}

