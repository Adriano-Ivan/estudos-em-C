#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("numero.txt", "r");

    if(file == NULL) {
        printf("O arquivo nao pode ser aberto.\n\n");
        system("pause");
        return 0;
    }
    int x, y, z;

    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i\n\n", x, y, z);

    fclose(file);
    system("pause");
    return 0;
}
