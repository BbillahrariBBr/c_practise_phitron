#include<stdio.h>
#include<string.h>
//unsigned int binaryToInt(char str[])
//{
//    int len = strlen(str);
//    unsigned int ans = 0;
//    for(int i=len-1, p2=1; i>=0; i--,p2*=2)
//    {
//        int bit = str[i]-'0';
//        if(bit == 1)
//        {
//            ans +=p2;
////            printf("%d\n",ans);
//        }
////        printf("%d %d %d\n",i,p2,bit);
//    }
//    return ans;
//
//}


unsigned int binaryToInt(char str[])
{
    int len = strlen(str);
    unsigned int ans = 0;
    for(int i=0; i<len; i++)
    {
        int bit = str[i]-'0';
        ans = ans*2+bit;
    }
    return ans;

}
int main()
{
    char str[100];
    gets(str);
    printf("%d\n",binaryToInt(str));

    return 0;
}
