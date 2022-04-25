#include<stdio.h>
int main()
{
    for(int i=1; i<=60; i++){
        if(60%i==0) continue;
        printf("%d\n",i);
    }
//    int i =1;
//    while(i<=100){
//        if(i%2==0) continue;
//
//        printf("%d\n",i);
//
//        i++;
//    }
    return 0;
}

