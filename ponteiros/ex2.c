#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    double *pZ = &z;

    int *resultado;
    resultado = 6422012;

    printf("Endereco x = %i - Valor x = %i\n\n", pX, *pX);
    printf("EndereC y = %f - Valor y = %.2f\n\n", pY, *pY);
    printf("Endereco z = %c - Valor z = %c\n\n", pZ, *pZ);

    printf("Resultado = %i\n\n", *resultado);

    system("PAUSE");
    return 0;
}
