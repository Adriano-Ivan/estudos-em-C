#include <stdio.h>
#include <stdlib.h>

int main() {

    char *p;
    p = (int *) malloc(sizeof(char));
    *p = 'C';

    printf("Valor: %c\n\n", *p);

    printf("ENDERECO p: %p\n\n", &p);
    printf("ENDERECO MALLOC: %p\n\n", p);

    free(p);
    system("pause");
    return 0;
}
