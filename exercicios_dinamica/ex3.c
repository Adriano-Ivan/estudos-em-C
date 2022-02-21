#include <stdio.h>
#include <stdlib.h>

int main() {

    double *b;

    b = (int *) malloc(sizeof(double));

    *b = 322;

    printf("Valor: %.2lf\n\n", *b);

    system("pause");
    return 0;
}
