#include<stdio.h>
char *strChr(char *str, char ch){
    for(;;str++)
    {
        if(*str == ch) return str;
        if(!*str) return '\0';
    }
}
int main()
{
    char str[] = "Hello";
    char *pos = strChr(str,'l');
//    if(!pos)
//    {
//        printf("Not found");
//    }
//    else{
//        printf("found at %d", pos-str);
//    }
//    char *pos = strChr(str,'l');
    printf("%s",pos);

    return 0;
}


//int main()
//{
//    char str[] = "Hello";
//    char *pos = strChr(str,'l');
//
//    }
//    char *pos = strChr(str,'l');
//    printf("%s",pos);
//
//    return 0;
//}


//char *strchr42a(char *str, int ch)
//{
//do      {
//        if (*str == ch) return str;
//        } while (*str++) ;
//return NULL;
//}
