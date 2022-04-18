#include <stdio.h>

int main() {
    float A,B,C;
    //const float PI = 3.14159;
    scanf("%f %f %f",&A, &B, &C);
    float rect = A*B;
    float trian = .5* A * C;
    float circle = 3.14159 * C * C;
    float trap = ((A+B)/2) * C;
    float square = B*B;

    printf("TRIANGULO: %.3f\n",trian);
    printf("CIRCULO: %.3f\n",circle);
    printf("TRAPEZIO: %.3f\n",trap);
    printf("QUADRADO: %.3f\n",square);
    printf("RETANGULO: %.3f",rect);

    return 0;
}
