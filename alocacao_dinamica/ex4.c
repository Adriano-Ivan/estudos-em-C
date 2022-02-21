#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    p = (int *) calloc(5, sizeof(int));

    int i;
    for(i = 0; i < 5; i++) {
        printf("Endereco de p%i = %p | Valor de p%i = %i\n", i, (p + i), i, *(p + i));
    }

    int *p2;
    p2 = (int *) malloc(5 * sizeof(int));

    int i2;
    for(i2 = 0; i2 < 5; i2++) {
        printf("Endereco de p%i = %p | Valor de p%i = %i\n", i2, (p2 + i2), i2, *(p2 + i2));
    }

    return 0;

}
