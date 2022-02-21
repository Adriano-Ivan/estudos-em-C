#include <stdio.h>
#include <stdlib.h>

struct dvd {
    char titulo[20];
    char genero[20];
    float duracao;
    int prateleira;
};

typedef struct dvd dvd;

void ler(dvd *mydvd) {
    printf("\nDIGITE O TITULO: ");
    gets(mydvd->titulo);

    printf("\nDIGITE O GENERO: ");
    gets(mydvd->genero);

    printf("\nDIGITE A DURACAO: ");
    scanf("%f", &mydvd->duracao);

    printf("\nDIGITE A PRATELEIRA: ");
    scanf("%d", &mydvd->prateleira);
}

void apresentar(dvd *mydvd) {
    printf("\nTITULO: %s", mydvd->titulo);
    printf("\nGENERO: %s", mydvd->genero);
    printf("\nDURACAO: %.2f", mydvd->duracao);
    printf("\nPRATELEIRA: %d", mydvd->prateleira);
    printf("\n");
}

void inicializar(dvd **odvd) {
    *odvd = (dvd*)malloc(sizeof(dvd));
}
int main() {

    dvd *meudvd;
    inicializar(&meudvd);

    ler(meudvd);
    apresentar(meudvd);

    system("pause");
    return 0;
}
/*
struct dvd {
    char titulo[20];
    char genero[20];
    float duracao;
    int prateleira;
};

typedef struct dvd dvd;

void ler(dvd *mydvd) {

    printf("\nDigite o titulo do dvd: ");
    gets(mydvd->titulo);

    printf("\nDigite o genero do dvd: ");
    gets(mydvd->genero);

    printf("\nDigite a duracao: ");
    scanf("%f", &mydvd->duracao);

    printf("\nDigite a prateleira");
    scanf("%d", &mydvd->prateleira);
}

void apresentar(dvd mydvd) {

    printf("\nTITULO: %s", mydvd.titulo);
    printf("\nGENERO: %s", mydvd.genero);
    printf("\nDURACAO: %.2f", mydvd.duracao);
    printf("\nPRATELEIRA: %d\n", mydvd.prateleira);
}
int main() {
    dvd meudvd;

    ler(&meudvd);
    apresentar(meudvd);

    system("pause");
    return 0;
}*/
/*
struct dvd {
    char titulo[20];
    char genero[15];
    float duracao;
    int prateleira;
};

typedef struct dvd dvd;

int main() {

    dvd *meudvd;
    meudvd = (dvd *) malloc(sizeof(dvd));

    printf("\nDigite o titulo do dvd: ");
    gets(meudvd->titulo);

    printf("\nDigite o genero do dvd: ");
    gets(meudvd->genero);

    printf("\nDigite a duracao: ");
    scanf("%f", &meudvd->duracao);

    printf("\nDigite a prateleira: ");
    scanf("%i", &meudvd->prateleira);


    printf("\nTITULO: %s", meudvd->titulo);
    printf("\nGENERO: %s", meudvd->genero);
    printf("\nDURACAO: %.2f", meudvd->duracao);
    printf("\nPRATELEIRA: %i", meudvd->prateleira);

    printf("\n");

    free(meudvd);
    system("pause");
    return 0;
}
*/
/*
struct dvd {
    char titulo[10];
    char genero[10];
    float duracao;
    int prateleira;
};

typedef struct dvd dvd;

dvd ler() {
    dvd meudvd;

    printf("\nDigite o titulo do dvd: ");
    gets(meudvd.titulo);

    printf("\nDigite o genero: ");
    gets(meudvd.genero);

    printf("\nDigite a duracao: ");
    scanf("%f", &meudvd.duracao);

    printf("\nDigite a prateleira: ");
    scanf("%i", &meudvd.prateleira);

    return meudvd;
}

void apresentar(dvd thedvd) {
    printf("\nTitulo: %s", thedvd.titulo);
    printf("\nGenero: %s", thedvd.genero);
    printf("\nDuracao: %.2f", thedvd.duracao);
    printf("\nPrateleira: %i", thedvd.prateleira);

    printf("\n");
}

int main() {
    dvd meudvd;

    meudvd = ler();
    apresentar(meudvd);

    system("pause");
    return 0;
}*/
/*
struct dvd {
    char titulo[10];
    char genero[10];
    float duracao;
    int prateleira;
};

typedef struct dvd dvd;
int main() {

    dvd meudvd;

    printf("\nDigite o titulo do dvd: ");
    gets(meudvd.titulo);

    printf("\nDigite o genero: ");
    gets(meudvd.genero);

    printf("\nDigite a duracao: ");
    scanf("%f", &meudvd.duracao);

    printf("\nDigite a prateleira: ");
    scanf("%d", &meudvd.prateleira);

    printf("\nTitulo: %s", meudvd.titulo);
    printf("\nGenero: %s", meudvd.genero);
    printf("\nDuracao: %.2f", meudvd.duracao);
    printf("\nPrateleira: %i", meudvd.prateleira);

    printf("\n");
    system("pause");
    return 0;
}
*/
/*
struct pokemon {
    char nome[10];
    int vida;
    int ataque;
    int defesa;
};

typedef struct pessoa pessoa;

int main() {

    struct pokemon *x;
    x = (struct pokemon*) malloc(sizeof(struct pokemon));

    scanf("%d", &x->vida);
    scanf("%d", &x->ataque);
    scanf("%d", &x->defesa);
    fflush(stdin);
    gets(x->nome);

    printf("%d\n", x->vida);
    printf("%d\n", x->ataque);
    printf("%d\n", x->defesa);
    printf("%s\n", x->nome);
*/
    /*
    printf("\n%p", &p);
    printf("\n%p - %p", &x, x );
    p.vida = 10;
    p.ataque = 23;
    p.defesa = 32;

    scanf("%d", &p.vida);
    scanf("%d", &p.ataque);
    scanf("%d", &p.defesa);
    fflush(stdin);
    gets(p.nome);

    printf("%d\n", p.vida);
    printf("%d\n", p.ataque);
    printf("%d\n", p.defesa);
    printf("%s\n", p.nome);

    //printf("%d\n\n", sizeof(p));// Alinhamento de estruturas

    system("pause");
    return 0;

}
*/
