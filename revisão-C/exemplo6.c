#include <stdio.h>
#include <stdlib.h>

int main() {

    char linha[100];
    char caractere;
    int i = 0;

    printf("Digite algo: ");
    do {
        caractere = getchar();
        linha[i] = caractere;
        ++i;
    }while(caractere != '\n');

    linha[i - 1] = '\0';
    printf("%s\n", linha);
    system("pause");
    return 0;
}
