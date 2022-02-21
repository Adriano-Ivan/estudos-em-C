#include "stdio.h"
#include "stdlib.h"

#define TAM_HASH 10

struct elemento {
    int dado;
    struct elemento *prox;
};

typedef struct elemento *Lista;

void imprimeLista(Lista l) {

    Lista p;

    printf("\nItens da lista\n");
    p = l;
    while(p != NULL) {
        printf("%d - ", p->dado);
        p = p -> prox;
    }

    printf("\n");
}

Lista retiraLista(Lista l, int e) {

    Lista p, ant;

    p = l;
    ant = l;

    while((p != NULL) && (p->dado != e)){
        ant = p;
        p = p -> prox;
    }

    if(p != NULL) {
        if(p == ant) {
            l = p -> prox;
            free(p);
        } else {
            ant -> prox = p -> prox;
            free(p);
        }
        printf("\n Elemento %d retirado !", e);
    } else {
        printf("\n Elemento %d nao foi encontrado para remocao.", e);
    }

    return (l);
}

Lista insereLista(Lista l, int elemento) {

    Lista novo;
    novo = (Lista *) malloc(sizeof(Lista));
    if(!novo) {
        printf("\nNAO HA ESPACO DE MEMORIA SUFICIENTE !\n");
        exit(1);
    }

    novo -> dado = elemento;
    printf("\nItem %d inserido !",elemento);

    if(l == NULL || elemento < l -> dado) {
        novo -> prox = l;
        l = novo;
    } else {
        Lista aux;
        for(aux = l; aux -> prox != NULL && elemento > (aux->prox) -> dado; aux = aux -> prox);

        novo -> prox = aux -> prox;
        aux -> prox = novo;
    }

    return l;
}

Lista buscaLista(Lista l, int e) {

    Lista p;

    p = l;

    while((p != NULL) && (p -> dado != e)) {
        p = p -> prox;
    }

    return p;
}

Lista criaLista() {

    return NULL;
}

int hash(int chave) {
    return (chave % TAM_HASH);
}

void criaHash(Lista *h) {
    int i;
    for(i = 0; i < TAM_HASH; i++) {
        h[i] = criaLista();
    }
}

void insereHash(Lista *h, int valor) {
    int i;
    i = hash(valor);
    h[i] = insereLista(h[i], valor);
}

Lista buscaHash(Lista *h, int valor) {
    int i;
    i = hash(valor);
    return (buscaLista(h[i], valor));
}

void retiraHash(Lista *h, int valor) {
    int i;
    i = hash(valor);
    h[i] = retiraLista(h[i], valor);
}

void imprimeHash(Lista *h) {
    int i;
    printf("\n Impressao das listas do hash");
    for(i = 0; i < TAM_HASH; i++) {
        printf("\nh[%d]: ", i);
        imprimeLista(h[i]);
    }
    printf("\n");
}
int main() {

    Lista h[TAM_HASH];
    Lista aux;
    int opcao;
    int item;

    criaHash(h);
    opcao = 1;
    while(opcao != 0) {
        printf("\n OPERACAOES DA TABELA HASH: ");
        printf("\n1 - Inserir um elemento");
        printf("\n2 - Retirar um elemento");
        printf("\n3- Buscar um elemento");
        printf("\n4 - Imprimir todos os elementos");
        printf("\n0 - Sair");
        printf("\nSua opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
        case 1:
            printf("\n Digite o elemento a ser inserido: ");
            scanf("%d", &item);
            insereHash(h, item);
            break;
        case 2:
            printf("\n Digite o elemento a ser retirado: ");
            scanf("%d", &item);
            retiraHash(h, item);
            break;
        case 3:
            printf("\n Digite o item a ser buscado: ");
            scanf("%d", &item);
            aux = buscaHash(h, item);
            if(aux == NULL) {
                printf("\n O item %d NAO foi encontrado.", item);
            } else {
                printf("\n O item %d foi encontrado.", item);
            }
            break;
        case 4:
            imprimeHash(h);
            break;
        case 0:
            break;
        default:
            printf("\nDigite uma opcao valida.");
        }
    }
    system("pause");
    return 0;
}
