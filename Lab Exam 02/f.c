#include<stdio.h>
int main()
{
    int n,m;
    int count =1;
    scanf("%d %d",&n,&m);
    if(n%2)
    {
        for(int i=1;i<=n; i++)
        {
            for(int j =1;j<=m; j++)
            {
                if(i%2){
                    printf("#");
                }
                else
                {
                    if(m%2)
                    {
                        if(count%2  && j == m)
                        {
                            printf("#");

                        }
                        else if(count%2 == 0 && j ==1)
                        {
                            printf("#");


                        }
                        else
                        {
                           printf(".");
                        }
                        count++;

                    }
                    else
                    {

                        if(count%2==0  && j == m && (i/2)%2)
                        {
                            printf("#");

                        }
                        else if(count%2 && j ==1 && (i/2)%2 ==0)
                        {
                            printf("#");
                            //count++;


                        }
                        else
                        {
                           printf(".");
                        }
                        count++;


                    }


                }
            }
            printf("\n");
        }

    }

    return 0;
}
