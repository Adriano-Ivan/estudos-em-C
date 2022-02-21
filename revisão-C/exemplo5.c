#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[30];
    char sobrenome[20];

    printf("Insira seu nome e sobrenome: \n");
    scanf("%s", &nome);

    sobrenome = "Ivan";
    printf("%s %s\n\n", nome, sobrenome);

    system("PAUSE");
    return 0;
}
