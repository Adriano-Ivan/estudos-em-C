
#include <stdio.h>
#include <string.h>

#define MaxItens 10
#define TamItem 20

typedef char tpLista[MaxItens][TamItem];

void insereLista(tpLista l, char *item) {

    int i;

    for(i = 0; i < MaxItens && strlen(l[i]) > 0; i++);

    if(i < MaxItens) {
        strcpy(l[i], item);
        printf("\nItem (%s) inserido com sucesso", item);
    } else {
        printf("\nLista cheia, nao pode inserir !");
    }
}

void retiraLista(tpLista l, char *item) {

    int i;

    for(i = 0; i < MaxItens && strlen(l[i]) > 0 && (strcmp(l[i], item) != 0); i++ );

    if (strcmp(l[i], item) == 0) {
        printf("\nItem (%s) encontrado, removendo", item);
        if (i < (MaxItens - 1)) {
            for(;i < (MaxItens - 1) && strlen(l[i]) > 0; i++)
                strcpy(l[i], l[i+1]);
        }
        l[MaxItens-1][0] = '\0';
    } else {
        printf("\nItem (%s) nao encontrado", item);
    }
}

int contaLista(tpLista l) {

    int i;

    for(i = 0; i < MaxItens && strlen(l[i]) > 0; i++);

    return (i);
}

void imprimeLista(tpLista l) {

    int i;

    printf("\nItens da lista\n");
    for(i = 0; i < MaxItens && strlen(l[i])>0; i++) {
        printf("\n%s", l[i]);
    }
    printf("\n");
}

void criaLista(tpLista l) {

    int i;

    for(i = 0; i < MaxItens; i++) {
        l[i][0] = '\0';
    }
}

void leString(char *s, int tam) {

    fgets(s, tam, stdin);
    s[strlen(s) - 1] = '\0';
}

int main() {

    tpLista Lista;
    int op;
    int cont;
    char item[20];
    char opcao[10];

    criaLista(Lista);
    op = 1;
    while(op != 0) {
        printf("\nLista de strings com alocao estatica");
        printf("\n\n1 - Inserir item");
        printf("\n2 - Imprimir item");
        printf("\n3 - Retirar item");
        printf("\n4 - Tamanho da lista");
        printf("\n0 - Encerrar\n");
        printf("\nOpcao: ");
        leString(opcao, 8);
        sscanf(opcao, "%d", &op);
        switch(op) {
            case 1: printf("\nEntre com o item a inserir: ");
                    leString(item, TamItem);
                    insereLista(Lista, item);
                    break;
            case 2: imprimeLista(Lista);
                    break;
            case 3: printf("\nEntre com o item a retirar: ");
                    leString(item, TamItem);
                    retiraLista(Lista, item);
                    break;
            case 4: cont = contaLista(Lista);
                    printf("\nA lista tem %d itens", cont);
                    break;
            case 0: break;
            default: printf("\nOpcao invalida");
        }
    }
}

