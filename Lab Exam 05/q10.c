#include<stdio.h>
#include<string.h>

int main()
{
//    char str[] = "Hello";
    char text[100];
    scanf("%s",text);
    char *pchr = strchr(text,'a');
    if(!pchr)
    {
        printf("Not found\n");
    }
    else{
        printf("found at %d\n", pchr-text);
    }

    char *pstr = strstr(text,"a");
    if(!pstr)
    {
        printf("Not found\n");
    }
    else{
        printf("found at %d\n", pstr-text);
    }

//    printf("%s",pos);

    return 0;
}




//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char text[100];
//    scanf("%s",text);
// for strchr()
//    char *pchr = strchr(text,'a');
//    if(!pchr)
//    {
//        printf("Not found\n");
//    }
//    else{
//        printf("found at %d\n", pchr-text);
//    }
// for strstr()
//    char *pstr = strstr(text,"a");
//    if(!pstr)
//    {
//        printf("Not found\n");
//    }
//    else{
//        printf("found at %d\n", pstr-text);
//    }
//
//    printf("%s",pos);
//
//    return 0;
//}
