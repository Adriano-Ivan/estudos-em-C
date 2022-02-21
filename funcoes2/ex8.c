#include <stdio.h>
#include <stdlib.h>

int main() {

    void funcaoPrint(int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10};

    funcaoPrint(x, vetor);

    printf("Variable int in the main function = %i\n", x);
    printf("Vector in the main function = %i\n", vetor[1]);

    system("pause");
    return 0;
}

void funcaoPrint(int x, int vetor[]) {//Com vetores ou matrizes, não há cópia, mas sim uma passagem de endereço

    x = x + 10;
    vetor[1] = 20;

    printf("Variable in the Print function = %i\n", x);
    printf("Vector in the Print function = %i\n", vetor[1]);
}
