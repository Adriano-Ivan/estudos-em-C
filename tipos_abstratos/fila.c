#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct elemento
{
    int dado;
    struct elemento *prox;
};

typedef struct elemento *facElemento;

typedef struct {
    facElemento beg;
    facElemento end;
} Fila;

Fila criaFila() {
    Fila fila;
    fila.beg = NULL;
    fila.end = NULL;
    return fila;
}

int verificaFilaVazia(Fila f) {
    if(f.beg == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}

Fila insereNaFila(Fila f, int n) {

    facElemento filaAux;

    filaAux = malloc(sizeof(struct elemento));
    filaAux -> dado = n;
    filaAux -> prox = NULL;
    if(verificaFilaVazia(f)) {
        f.beg = filaAux;
        f.end = filaAux;
    } else {
        f.end->prox = filaAux;
        f.end = filaAux;
    }
    printf("ITEM ADICIONADO !");
    return f;
}

Fila retiraDaFila(Fila f, int *p) {
    facElemento filaAux;

    if(!verificaFilaVazia(f)) {
        *p = f.beg -> dado;
        filaAux = f.beg;
        f.beg = f.beg -> prox;
        free(filaAux);
        if(verificaFilaVazia(f)) {
            f.end = NULL;
        }
    } else {
        *p = -1;
        printf("\nA fila esta vazia.");
    }
    return f;
}

void imprimeFila(Fila f) {

    facElemento filaAux;
    printf("\nItens da fila: \n");
    filaAux = f.beg;

    if(filaAux != NULL) {
        while(filaAux != NULL) {
        printf("%d - ", filaAux->dado);
        filaAux = filaAux -> prox;
    }
    } else {
        printf("\n A fila esta vazia !");
    }
}
int main() {
    Fila fila;
    int o = 1, escolha = 0, *num_retirado;

    num_retirado = (int *) malloc(sizeof(int));
    fila = criaFila();
    while(o != 0) {
        printf("\n\nFILA");
        printf("\n1. Inserir item na fila");
        printf("\n2. Retirar item da fila");
        printf("\n3. Imprimir conteudo da fila");
        printf("\n0. Sair");
        printf("\nSua resposta: ");
        scanf("%d", &o);
        switch(o) {
            case 0: break;
            case 1: printf("\nQual numero ? ");
                    scanf("%d", &escolha);
                    fila = insereNaFila(fila, escolha);
                    break;
            case 2: fila = retiraDaFila(fila, num_retirado );
                    if(*num_retirado != -1) {
                        printf("\nItem %d retirado !", *num_retirado);
                    }
                    break;
            case 3: imprimeFila(fila);
                    break;
            default: printf("\nOPCAO INVALIDA !");
                     break;
        }
    }
    return 0;
}
