#include<stdio.h>
#include<stdbool.h>
int main()
{
    int year;
    scanf("%d",&year);

    for(int y=year+1; ; y++)
    {
        int curyear = y;

        int freq[10] ={0};
        bool repeat = false;
        while(curyear>0)
        {
            int d = curyear%10;
            curyear /=10;
//            printf("%d ",d);
            freq[d]++;

            if(freq[d]>=2)
            {
                repeat = true;
            }
        }
        if(!repeat)
        {
            printf("%d\n",y);
            break;
        }
    }
    return 0;
}
