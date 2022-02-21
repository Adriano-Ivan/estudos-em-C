#include <stdio.h>
#include <stdlib.h>

void ler(int *ano) {
    printf("Digite o ano de nascimento: ");
    scanf("%i", ano);
}

void calcularIdade(int *a, int *idade) {
    *idade = 2021 - *a;
}

void apresentarIdade(int *idade) {
    printf("Ele tem %d anos de idade\n\n", *idade);
}

int main() {

    int *ano, *idade;
    ano = (int *) malloc(sizeof(int));
    idade = (int *) malloc(sizeof(int));

    ler(ano);
    calcularIdade(ano, idade);
    apresentarIdade(idade);

    printf("Ele tem %d anos de idade\n\n", *idade);
    system("pause");
    return 0;
}
