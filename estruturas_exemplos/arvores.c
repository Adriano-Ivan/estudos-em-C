#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int dado;
    struct Elemento *esq;
    struct Elemento *dir;
};

typedef struct Elemento *Arvore;

Arvore criaArvore() {
    return NULL;
}
void insereArvore(Arvore *a, int valor) {

    if((*a) == NULL) {
        (*a) = (Arvore)malloc(sizeof(struct Elemento));
        (*a) -> dado = valor;
        (*a) -> esq = NULL;
        (*a) -> dir = NULL;
        printf("\n Valor  %d inserido !", valor);
    } else if(valor < (*a) -> dado) {
        insereArvore(&((*a) -> esq), valor);
    } else if(valor > (*a) -> dado) {
        insereArvore(&((*a) -> dir), valor);
    } else {
        printf("\n Valor ja existente... favor inserir outro.\n");
    }
}

Arvore buscaArvore(Arvore a, int valor) {

    if(a == NULL) {
        return NULL;
    } else if(valor < a -> dado) {
        return buscaArvore(a -> esq, valor);
    } else if(valor > a -> dado) {
        return buscaArvore(a -> dir, valor);
    } else {
        return a;
    }
}

void preOrdem(Arvore a) {
    if(a != NULL) {
        printf("\n%d", a->dado);
        preOrdem(a->esq);
        preOrdem(a->dir);
    }
}

void posOrdem(Arvore a) {

    if(a != NULL) {
        posOrdem(a->esq);
        posOrdem(a->dir);
        printf("\n%d", a->dado);
    }
}

void inOrdem(Arvore a) {
    if(a != NULL) {
        inOrdem(a->esq);
        printf("\n%d", a->dado);
        inOrdem(a->dir);
    }
}

void antecessor(Arvore a, Arvore *x) {
    Arvore aux;

    if((*x) -> dir != NULL) {
        antecessor(a, &((*x)->dir));
    } else {
        a->dado = (*x)->dado;
        aux = *x;
        *x = aux->esq;
        free(aux);
    }
}

void retiraArvore(Arvore *a, int valor) {
    Arvore aux;

    if(*a != NULL) {
        if(valor > ((*a) -> dado)) {
            retiraArvore(&((*a) -> dir), valor);
        } else if(valor < ((*a) -> dado)) {
            retiraArvore(&((*a) -> esq), valor);
        } else {
            if((*a) -> dir == NULL) {
                aux = (*a);
                *a = aux -> esq;
                free(aux);
                printf("\n Valor %d retirado !", valor);
            } else if((*a) -> esq == NULL) {
                aux = (*a)->dir;
                free(*a);
                *a = aux;
                printf("\n Valor %d retirado !", valor);
            } else {
                antecessor(*a, &((*a) -> esq));
                printf("\n Valor %d retirado !", valor);
            }
        }
    } else {
        printf("\n Valor nao encontrado...");
    }
}

int main() {

    Arvore *arvore, aux;
    int op = 1;
    int item;

    aux = criaArvore();
    arvore = criaArvore();
    while(op != 0) {
        printf("\n\nARVORE");
        printf("\n\n1 - INSERE");
        printf("\n2 - BUSCA");
        printf("\n3 - PRE-ORDEM ");
        printf("\n4 - POS-ORDEM");
        printf("\n5 - IN-ORDEM");
        printf("\n6 - RETIRA");
        printf("\n0 - SAIR");
        printf("\nOpcao: ");
        scanf("%d", &op);
        switch(op) {
            case 1: printf("\nEntre com o item a inserir: ");
                    scanf("%d", &item);
                    insereArvore(&arvore, item);
                    break;
            case 2: printf("\n Qual elemento deseja buscar ? ");
                    scanf("%d",&item);
                    aux = buscaArvore(arvore, item);
                    if(aux == NULL) {
                        printf("\n Elemento nao presente na arvore.");
                    } else {
                        printf("\nO elemento %d foi encontrado na arvore.", aux->dado);
                    }
                    free(aux);
                    break;
            case 3: preOrdem(arvore);
                    break;
            case 4: posOrdem(arvore);
                    break;
            case 5: inOrdem(arvore);
                    break;
            case 6: printf("\nQual valor deseja retirar ? ");
                    scanf("%d", &item);
                    retiraArvore(&arvore, item);
            case 0: break;
            default: printf("\nOpcao invalida");
        }
    }
    free(arvore);
}
