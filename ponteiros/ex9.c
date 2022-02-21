#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[3] = {1, 2, 3};

    int *ponteiro = vetor;

    *(ponteiro + 1) = 10;

    printf("%i\n", vetor[1]);
    /*
    int *ponteiro = vetor;
    /*
    for(int c = 0; c < 3; c++) {
        printf("%i\n", ponteiro[c]);
    }
    */

    /*
    int *ponteiro = &vetor[0];
    printf("%p\n", ponteiro);

    ponteiro = &vetor[1];
    printf("%p\n", ponteiro);

    ponteiro = &vetor[2];
    printf("%p\n", ponteiro);
    */

    getchar();
    system("pause");
    return 0;
}
