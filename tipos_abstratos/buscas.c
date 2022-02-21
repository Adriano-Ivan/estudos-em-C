#include "stdio.h"
#include "stdlib.h"

void mostrarNumero(int posicao, int num) {
    if(posicao != -1) {
        printf("O numero %d foi encontrado na posicao %d do vetor.\n", num, posicao);
    } else {
        printf("Valor nao encontrado.\n");
    }
}
void buscaSequencial(int *vetor, int num, int tam) {
    int posicao = -1;
    int iterador = 0;

    while((iterador < tam) && (posicao == -1)) {
        if(vetor[iterador] == num) {
            posicao = iterador;
        }
        iterador++;
    }

    mostrarNumero(posicao, num);

}

void buscaBinaria(int *vetor, int inicio, int fim, int num) {
    int meio;
    int posicao = -1;
    int i, f;

    i = inicio;
    f = fim;

    while((i <= f) && (posicao == -1)) {
        meio = (i + f) / 2;
        if(num == vetor[meio]) {
            posicao = meio;
        } else if(num > vetor[meio]) {
            i = meio + 1;
        } else {
            f = meio - 1;
        }
    }

    mostrarNumero(posicao, num);
}

void armazenarValores(int *vetor,int tam) {

    for(int i = 0; i < tam; i++) {
        printf("DIGITE O NUMERO DA POSICAO %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n");
}

void mostrarValores(int *vetor, int tam) {
    printf("NUMEROS LANCADOS: \n");
    for(int i = 0; i < tam; i++) {
        printf("[ %d ] ", vetor[i]);
    }
    printf("\n\n");
}
int escolherNumero() {
    int n;
    printf("Que numero deseja escolher ? ");
    scanf("%d", &n);

    return n;
}

int main() {

    int vetor[10] = {0};
    int tam = sizeof(vetor) / sizeof(int);

    armazenarValores(&vetor, tam);
    mostrarValores(&vetor, tam);

    buscaSequencial(&vetor, escolherNumero(), tam);
    buscaBinaria(&vetor, 0, tam, escolherNumero());

    return 0;
}
