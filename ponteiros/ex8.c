#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[3] = {1, 2, 3};
    //int *ponteiro = &vetor[2];
    int *ponteiro = vetor;

    for(int c = 0; c < 3; c++) {
        printf("%i\n", ponteiro[c]);
    }
    printf("\n");
    printf("%i\n", *ponteiro);
    system("pause");
    return 0;
}
