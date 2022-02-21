#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct dicionario {
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]) {

    int i = 0;
    while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
        ++i;
    }

    if(palavra1[i] == '\0' && palavra2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras) {

    bool compararStrings(const char palavra1[], const char palavra2[]);

    int i = 0;
    while(i < numDePalavras) {

        if(compararStrings(procurar, lingua[i].palavra)) {
            return i;
        } else {
            ++i;
        }
    }
    return -1;
}

int main(void) {

    int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);
    bool compararStrings(const char palavra1[], const char palavra2[]);

    const int NUMERODEDEFINICOES = 7;
    char palavra[20] = {'\0'};
    int resultadoPesquisa;

    const struct dicionario portugues[7] = {
        {"queijo", "Comida feita de leite"},
        {"vinho", "Bebida supimpa"},
        {"feijao", "Da Africa"},
        {"batata", "Tuberculo"},
        {"molho", "Composto cremoso de varios ingredientes"},
        {"picanha", "Carne bovina"},
        {"ovos", "Vem da galinha"}
    };

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);

    if(resultadoPesquisa != -1) {
        printf("%s\n\n", portugues[resultadoPesquisa].definicao);
    } else {
        printf("Palavra nao encontrada.\n\n");
    }
    system("pause");
    return 0;
}
