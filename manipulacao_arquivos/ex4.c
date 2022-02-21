#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("string.txt", "a");

    if(file == NULL) {
        printf("Arquivo nao encontrado !");
        getchar();
        exit(1);
    }

    fprintf(file, "Mais uma linha para exemplificar\n");

    char frase[] = "Uma segunda linha interessante para exemplificar\n";
    fputs(frase, file);

    char caractere = '3';
    fputc(caractere, file);

    fclose(file);
    system("pause");
    return 0;
}
