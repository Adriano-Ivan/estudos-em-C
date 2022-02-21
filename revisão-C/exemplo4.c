#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamanhoString(char string[]);
    char stringUsuario[20];

    printf("Digite uma palavra (string): \n");
    scanf("%s", stringUsuario);

    int qt = tamanhoString(stringUsuario);

    printf("A palavra %s tem %i caracteres.\n\n", stringUsuario, qt);
    system("PAUSE");
    return 0;
}

int tamanhoString(char word[]) {

    int numCaracteres = 0;

    while(word[numCaracteres] != '\0') {

        ++numCaracteres;
    }

    ++numCaracteres;

    return numCaracteres;
}
