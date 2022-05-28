#include<stdio.h>
int main()
{
    float *space = (float*)malloc(100*sizeof(float));
    printf("%d",sizeof(*space));

    return 0;
}
