#include <stdio.h>
#include <stdlib.h>

/*
void ler(int *ponteiro) {

    printf("DIGITE 10 NUMEROS:\n ");
    for(int i = 0; i < 10; i++) {
        printf("\nDIGITE O VALOR: ");
        scanf("%d", (ponteiro+i));
    }
}

void apresentar(int *ponteiro) {

    printf("NUMEROS DIGITADOS: ");
    for(int i = 0; i < 10; i++) {
        printf("%d\n", *(ponteiro + i));
    }
}
int main() {

    int *p;
    p = (int *) malloc(10 * sizeof(int));

    ler(p);
    apresentar(p);

    system("pause");
    return 0;
}
*/

/*
void ler(int *p) {

    for(int i = 0; i < 10; i++) {
        printf("DIGITE UM NUMERO: ");
        scanf("%d", (p + i));
    }
}

void ordenar(int *ponteiro) {
    int aux;

    for(int i = 0; i < 9; i++)
        for(int j = i + 1; j < 10; j++)
            if(*(ponteiro + i) < *(ponteiro + j)) {
                aux = *(ponteiro + i);
                *(ponteiro + i) = *(ponteiro + j);
                *(ponteiro + j) = aux;
            }
}

void apresentar(int *p) {
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");
}
int main() {

    int *p;
    p = (int *) malloc(10*sizeof(int));

    ler(p);
    ordenar(p);
    apresentar(p);

    free(p);
    system("pause");
    return 0;
}
*/

/*
int ler(int *p) {
     int maior;
     for(int i = 0; i < 10; i++) {
        printf("\nDigite um valor: ");
        scanf("%d", (p + i));
        if(i == 0)
            maior = *(p + i);
        if(*(p + i) > maior)
            maior = *(p + i);
    }

    return maior;
}

void apresentar(int n) {
    printf("\nO maior numero e %d.\n\n", n);
}
int main() {

    int *p, maior;
    p = (int *) malloc(10 * sizeof(int));

    maior = ler(p);
    apresentar(maior);

    system("pause");
    return 0;
}
*/

/*
void ler(int *p) {
    for(int i = 0; i < 10; i++) {
        printf("DIGITE UM VALOR: ");
        scanf("%d", (p + i));
        *(p + i) = *(p + i) * 2;
    }
}

void apresentar(int *p) {
    printf("\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", *(p + i));

    printf("\n");
}
int main() {

    int *p;
    p = (int *) malloc(10 * sizeof(int));

    ler(p);
    apresentar(p);

    system("pause");
    return 0;
}
*/

void ler(float *p, float *p2) {

    for(int i = 0; i < 5; i++) {
        printf("DIGITE A NOTA: ");
        scanf("%f", (p + i));
        *p2 = *p2 + *(p + i);
    }
}

void show(float *media) {

    *media = *media / 5;
    printf("\nA media das notas e igual a %.2f\n", *media);
}

int main() {

    float *p;
    float *media;
    media = (float *) malloc(sizeof(float));
    p = (float *) malloc(5 * sizeof(float));

    ler(p, media);

    show(media);

    system("pause");
    return 0;
}











/*
int main() {

    double *p;
    p = (int *) malloc(2 * sizeof(double));

    printf("%p - %p\n", p, p + 1);
    free(p);
    system("pause");
    return 0;
}
*/
