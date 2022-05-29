#include<stdio.h>
#include<string.h>
void tobinary(unsigned int val,char str[])
{
    int idx =0;
    while(val > 0)
    {
        int d = val%2;
        val = val/2;
//        printf("%d ",d);
        str[idx] = '0' +d;
        idx++;

    }
    str[idx] = '\0';

}
int main()
{
    char str[100];
    unsigned int v =10;
    tobinary(v,str);
    printf("%s\n", str);

    return 0;
}
