#include <stdio.h>
#include <stdlib.h>

/*
int main() {

    int *a;
    a = (int *) malloc(sizeof(int));

    *a = 3;

    printf("%d\n\n", *a);

    free(a);
    system("pause");
    return 0;
}
*/

/*
int main() {

    double *p;
    p = (int *) malloc(sizeof(int));

    *p = 32;

    printf("VALOR: %.2lf\n\n", *p);

    system("pause");
    return 0;
}*/

/*
int main() {

    char *p;
    p = (char *) malloc(sizeof(char));

    *p = 'C';

    printf("%c\n\n", *p);
    printf("Endereco ponteiro: %p\n", &p);
    printf("Endereco malloc: %p\n", p);

    system("pause");
    return 0;
}*/

/*
int main() {

    int *p;
    p = (int *) malloc(sizeof(int));

    printf("Type a number: ");
    scanf("%d", p);

    printf("%d\n\n", *p);

    system("pause");
    return 0;
}*/

/*
void ler(int *ponteiro) {
    printf("Digite um valor: ");
    scanf("%d", ponteiro);
}

void apresentar(int *pont) {
    printf("%d\n\n", *pont);
}

int main() {

    int *p;
    p = (int *) malloc(sizeof(int));

    ler(p);
    apresentar(p);

    system("pause");
    return 0;
}
*/

/*
void showNumber(int *ponteiro) {
    printf("%d\n\n", *ponteiro);
}
int main() {

    int *p;
    p = (int *) malloc(sizeof(int));

    *p = 4;

    showNumber(p);

    free(p);
    system("pause");
    return 0;
}*/

/*
void ler(int *ponteiro)  {
    printf("DIGITE UM NUMERO: ");
    scanf("%i", ponteiro);
}
int main() {

    int *p;
    p = (int *) malloc(sizeof(int));

    ler(p);
    printf("%d\n\n", *p);

    system("pause");
    return 0;
}
*/

/*
void ler(int *p) {
    printf("DIGITE UM NUMERO: ");
    scanf("%d", p);
}

void calcular(int *p) {
    *p = *p * 2;
}

void mostrar(int *p) {
    printf("NUMERO DIGITADO: %d\n", *p);
}

int main() {

    int *p;
    p = (int *) malloc(sizeof(int));

    ler(p);
    calcular(p);
    mostrar(p);

    system("pause");
    return 0;

}
*/

/*
void ler(int *p) {

    printf("DOBRO DE QUAL NUMERO ? ");
    scanf("%d", p);
}

void calcularDobro(int *p, int *p2) {

    *p2 = *p * 2;
}

void imprimir(int *p1, int *p2) {

    printf("O dobro de %d e %d\n\n", *p1, *p2);
}
int main() {

    int *a, *finalResult;
    a = (int *) malloc(sizeof(int));
    finalResult = (int *) malloc(sizeof(int));

    ler(a);
    calcularDobro(a, finalResult);
    imprimir(a, finalResult);

    free(a);
    free(finalResult);
    system("pause");
    return 0;
}
*/

void lerAno(int *p) {
    printf("EM QUAL ANO NASCEU ? ");
    scanf("%d", p);
}

void calcularIdade(int *p, int *p2) {
    *p2 = 2021 - *p;
}

void imprimirIdade(int *p) {
    printf("A pessoa tem %d anos de idade\n\n", *p);
}
int main() {

    int *idade, *anoNascimento;
    idade = (int *) malloc(sizeof(int));
    anoNascimento = (int *) malloc(sizeof(int));

    lerAno(anoNascimento);
    calcularIdade(anoNascimento, idade);
    imprimirIdade(idade);

    free(idade);
    free(anoNascimento);
    system("pause");
    return 0;
}


