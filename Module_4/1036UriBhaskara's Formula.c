#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double value = (B*B) - (4*A*C);


    if(value>0 && A!=0){
        double r1,r2;
        value = sqrt(value);
        r1 = (-B+value)/(2*A);
        r2 = (-B-value)/(2*A);

        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
