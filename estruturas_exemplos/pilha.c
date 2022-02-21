#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct elemento {
    int dado;
    struct elemento *prox;
};

typedef struct elemento *Pilha;

int pilhaVazia(Pilha p) {
    if(p == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}
Pilha desempilha(Pilha p, int *e) {
    Pilha ap;

    if(!pilhaVazia(p) ){
        *e = p -> dado;
        ap = p;
        p = p -> prox;
        free(ap);
        printf("\nA acao foi bem-sucedida !");
    }
    else {
        *e = -1;
        printf("\nPilha vazia !\n");
    }
    return p;
}
Pilha empilha(Pilha p, int n) {
    Pilha novo;

    novo = malloc(sizeof(struct elemento));
    novo -> dado = n;
    novo -> prox = p;

    printf("\nA acao foi bem-sucedida !");
    return novo;
}
Pilha criarPilha() {
    return NULL;
}
void imprimePilha(Pilha p) {
    Pilha ap;

    printf("\nItens da pilha\n");
    ap = p;

    if(ap == NULL){
        printf("\nA pilha esta sem itens !");
    }
    while(ap != NULL) {
        printf("%d - ", ap -> dado);
        ap = ap -> prox;
    }
    printf("\n");
}
int main() {

    Pilha pilha;
    int op = 1;
    int item;
    int *retirado;
    retirado = (int *) malloc(sizeof(int));

    pilha = criarPilha();
    while(op != 0) {
        printf("\n\nPILHA");
        printf("\n\n1 - Empilha");
        printf("\n2 - Imprimir itens");
        printf("\n3 - Desempilha ");
        printf("\n0 - Encerrar\n");
        printf("\nOpcao: ");
        scanf("%d", &op);
        switch(op) {
            case 1: printf("\nEntre com o item a inserir: ");
                    scanf("%d", &item);
                    pilha = empilha(pilha, item);
                    break;
            case 2: imprimePilha(pilha);
                    break;
            case 3: pilha = desempilha(pilha, retirado);
                    printf("\nO item %d foi retirado.", *retirado);
                    break;
            case 0: break;
            default: printf("\nOpcao invalida");
        }
    }
}
