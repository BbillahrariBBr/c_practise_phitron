#include<stdio.h>
#include<string.h>

void makeStrCopy(char in[],char out[])
{
    int i = 0, j = 0;
    while (in[i] != '\0') {
        out[j] = in[i];
        i++;
        j++;
    }
    out[j] = '\0';
//    puts(out);
}
int main()
{
    char in[101],out[101];
    printf("Enter string: ");
    gets(in);

    makeStrCopy(in,out);
    puts(out);
//    printf("%s",out);

    return 0;
}


