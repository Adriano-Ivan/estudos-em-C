#include <stdio.h>
#include <stdlib.h>

void calcular(int *p1, int *p2) {
    *p2 = *p1 * 2;
}
int main() {

    int *p, *dobro;
    p = (int *) malloc(sizeof(int));
    dobro = (int *) malloc(sizeof(int));
    *p = 250;
    calcular(p, dobro);
    printf("Primeiro malloc: %d Dobro: %d\n\n", *p, *dobro);

    free(p);
    free(dobro);
    system("pause");
    return 0;
}
