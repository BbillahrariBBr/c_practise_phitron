//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char empty[5] = { '\0' };
//    char null[5];
//
//    if( strcmp(empty,null)==0 )
//        puts("Strings are the same");
//    else
//        puts("Strings are not the same");
//
//    return(0);
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
////input two string
//    char s[11], t[11];
//    scanf("%s %s",s,t);
//
//    int temp = strcmp(s,t);
//    if(temp>=1)
//    {
//        printf("No\n");
//
//        return 0;
//    }
//    printf("Yes\n");
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd", str2[] = "abdc", str3[] = "abbd";
  int result;

  // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}
