#include <stdio.h>
#include <stdlib.h>

int main() {

    void concatenarStrings(char string1[], char string2[], char string3[]);
    char palavra1[] = {'p', 'a', 'o', ' '};
    char palavra2[] = {'m','o','r','t','a','d','e','l','a'};
    char novaPalavra[13];

    concatenarStrings(palavra1, palavra2, novaPalavra);

    int i;
    for(i = 0; i < 13; i++) {
        printf("%c", novaPalavra[i]);
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}

void concatenarStrings(char word1[], char word2[], char word3[]) {

    int i = 0, j = 0, t = 0;

    while(word1[i] != '\0') {
        word3[i] = word1[i];
        ++i;
        ++t;
    }

    while(word2[j] != '\0') {
        word3[j + t] = word2[j];
        ++j;
    }

}
