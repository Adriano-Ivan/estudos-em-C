#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[10] = {23, 28, 1, 2, 8, 9, 2, 44, 2, 3};
    int i;
    void ordemCrescente(int vetor[], int n);

    ordemCrescente(vetor, 10);

    for(i = 0; i < 10; i++){
        printf("%i\n", vetor[i]);
    }

    system("pause");
    return 0;
}

void ordemCrescente(int vetor[], int n) {

    int i, j, temporaria;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(vetor[i] > vetor[j]) {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }
}
