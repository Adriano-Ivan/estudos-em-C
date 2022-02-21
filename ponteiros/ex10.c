#include <stdio.h>
#include <stdlib.h>

int somarVetor(int vetor[], const int n) {

    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n;

    for(ponteiro = vetor; ponteiro < finalVetor; ++ponteiro) {
        soma += *ponteiro;
    }

    return soma;
}

int main() {

    int somarVetor(int vetor[], const int n);
    int vetor[10] = {};

    for(int c = 0; c < 10; c++) {
        vetor[c] = 5;
    }

    vetor[10 - 1] = 10;
    vetor[10 - 2] = 10;
    printf("A soma dos elementos do vetor e igual a %i\n", somarVetor(vetor, 10));
    getchar();
    system("pause");
    return 0;
}
