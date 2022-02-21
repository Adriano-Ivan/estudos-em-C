#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct elemento {
    int dado;
    struct elemento *prox;
};

typedef struct elemento *Lista;

int leInt() {

    int ret;
    char s[10];

    fgets(s, 10, stdin);
    s[strlen(s) - 1] = '\0';
    sscanf(s, "%d", &ret);
    return ret;
}

void leString(char *s, int tam) {

    fgets(s, tam, stdin);
    s[strlen(s) - 1] = '\0';
}

Lista criaLista() {

    return NULL;
}

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

Lista insereLista(Lista l, int elemento) {

    Lista novo;
    novo = (Lista *) malloc(sizeof(Lista));
    if(!novo) {
        printf("\nNAO HA ESPACO DE MEMORIA SUFICIENTE !\n");
        exit(1);
    }

    novo -> dado = elemento;

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
/*
Lista insereLista(Lista l, int e) {

    Lista novo;
    novo = (Lista *) malloc(sizeof(Lista));
    if(!novo) { nulo
        printf("\nERRO ! NAO HA MEMORIA SUFICIENTE !");
        exit(1);
    }

    novo->dado = e;

    if(l == NULL || e < l->dado) {
        novo->prox = l;
        l = novo;
    } else {
        Lista aux;
        for(aux = l; aux -> prox != NULL && e >(aux->prox) -> dado; aux=aux->prox);

        novo->prox = aux->prox;
        aux->prox = novo;
    }
    return l;
}
*/

Lista buscaLista(Lista l, int e) {

    Lista p;

    p = l;

    while((p != NULL) && (p -> dado != e)) {
        p = p -> prox;
    }

    return p;
}

int contaLista(Lista l) {

    Lista p;
    int cont = 0;

    p = l;
    while(p != NULL) {
        cont++;
        p = p->prox;
    }

    return cont;
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
    }

    return (l);
}

int main() {

    Lista l;
    int op;
    int cont;
    Lista pos;
    int item;

    l = criaLista();
    op = 1;
    while(op != 0) {
        printf("\nLista de strings com alocacao dinamica");
        printf("\n\n1 - Inserir item na lista");
        printf("\n2- Imprimir lista");
        printf("\n3 - Retirar item");
        printf("\n4 - Tamanho da lista");
        printf("\n5 - Busca um elemento na lista");
        printf("\n0 - Encerrar\n");
        printf("\nOpcao: ");
        op = leInt();
        switch(op) {
            case 1: printf("\nEntre com o item a inserir: ");
                    item = leInt();
                    l = insereLista(l, item);
                    break;
            case 2: imprimeLista(l);
                    break;
            case 3: printf("\nEntre com o item a retirar: ");
                    item = leInt();
                    l = retiraLista(l, item);
                    break;
            case 4: cont = contaLista(l);
                    printf("\nA lista tem %d itens", cont);
                    break;
            case 5: printf("\nEntre com o elemento a ser buscado: ");
                    item = leInt();
                    pos = buscaLista(l, item);
                    if(pos == NULL) {
                        printf("\nItem nao encontrado");
                    } else {
                        printf("\nItem encontrado");
                    }

                    break;
            case 0: break;
            default: printf("\nOpcao invalida !");
        }
    }
}
