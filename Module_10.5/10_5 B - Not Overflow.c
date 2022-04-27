#include<stdio.h>
#include<math.h>
int main()
{

   int start = pow(-2,31);
   int end = pow(2,31)-1;
   //printf("%d %d",start, end);
   long long int number;
   scanf("%lld",&number);
   if(number>= start && number <= end)
   {
       printf("Yes");
   }
   else{
    printf("No");
   }
    return 0;
}
