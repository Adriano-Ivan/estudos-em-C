#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[100];
    int idade;
    int id;
    struct aluno *prox;
};

typedef struct aluno *Listagem;

int leInteiro() {

    int numero;
    scanf("%d", &numero);
    return numero;
}

void leString(char *s, int tam) {

    fflush(stdin);
    fgets(s, tam, stdin);
    s[strlen(s) - 1] = '\0';
}

Listagem criarLista() {
    return NULL;
}

void imprimirAlunos(Listagem l) {

    Listagem p;

    printf("\nAlunos presentes na lista:\n");
    p = l;
    while(p != NULL) {
        printf("\n-------------------------\n");
        printf("\nNome: %s\n", p->nome);
        printf("ID: %d\n", p->id);
        printf("Idade: %d\n", p->idade);
        printf("\n--------------------------\n");
        p = p -> prox;
    }

    printf("\n");
}

Listagem inserirAluno(Listagem l) {

    Listagem novo;
    char nomeInserido[100];
    int idadeInserida;
    int idInserido;

    printf("\nDigite o nome do aluno: ");
    leString(nomeInserido, 100);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idadeInserida);

    printf("Digite o ID que será usado: ");
    scanf("%d", &idInserido);

    novo = malloc(sizeof(struct aluno));
    strcpy(novo -> nome, nomeInserido);

    novo -> idade = idadeInserida;
    novo -> id = idInserido;

    novo -> prox = l;

    return (novo);
}

Listagem buscaNaLista(Listagem l, int id) {

    Listagem p;

    p = l;

    while((p != NULL) && (p -> id != id)) {
        p = p -> prox;
    }

    return p;
}

int contarAlunos(Listagem l) {

    Listagem p;
    int cont = 0;

    p = l;
    while(p != NULL) {
        cont++;
        p = p -> prox;
    }

    return cont;
}

Listagem retiraDaLista(Listagem l, int id) {

    Listagem p, ant;

    p = l;
    ant = l;

    while((p != NULL) && (p -> id != id)) {
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

    return l;
}
int main() {

    Listagem l;
    int op;
    int contador;
    Listagem pos;
    int item;

    l = criarLista();
    op = 1;
    while(op != 0) {
        printf("\nAlocacao dinamica de alunos");
        printf("\n\n1 - Inserir aluno");
        printf("\n2 - Imprimir lista de alunos");
        printf("\n3 - Retirar aluno da lista");
        printf("\n4 - Tamanho da lista de alunos");
        printf("\n5 - buscar aluno pelo ID");
        printf("\n0 - Encerrar\n");
        printf("\nOpcao: ");
        op = leInteiro();

        switch(op) {
        case 1:
            l = inserirAluno(l);
            break;
        case 2:
            imprimirAlunos(l);
            break;
        case 3:
            printf("Entre com o ID do aluno a ser retirado: ");
            item = leInteiro();
            l = retiraDaLista(l, item);
            break;
        case 4:
            contador = contarAlunos(l);
            printf("\n\nA lista tem %d alunos.\n", contador);
            break;
        case 5:
            printf("Entre com o ID do aluno a ser buscado: ");
            item = leInteiro();
            pos = buscaNaLista(l, item);
            if(pos == NULL) {
                printf("\nItem nao encontrado.\n");
            } else {
                printf("\nO item foi encontrado.\n");
            }

            break;
        case 0:
            break;
        default:
            printf("\nOpcao invalida !\n");
        }
    }
}
