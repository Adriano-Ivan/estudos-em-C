#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("teste.txt", "a");
    fprintf(file, "Texto de exemplo %i\n", 3);

    fclose(file);
    system("pause");
    return 0;
}
