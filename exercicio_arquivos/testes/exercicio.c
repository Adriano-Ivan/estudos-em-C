#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *pont_arq;
    pont_arq = fopen("arquivo.txt", "r");

    if(pont_arq == NULL) {
        printf("Nao foi possivel abrir o arquivo !");
        getchar();
        return 1;
    }

    /*
    char palavra[23];
    char letra;
    int cont = 0;
    printf("Digite uma palavra: ");

    do {
        letra = getchar();
        palavra[cont] = letra;
        cont++;
    }while(letra != '\n');

    palavra[cont - 1] = '\0';

    fprintf(pont_arq, "%s", palavra);
    */
    char c[30];

    while(fgets(c, 30, pont_arq) != NULL) {
        printf("%s", c);
    }
}
