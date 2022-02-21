#include <stdio.h>
#include <stdlib.h>

void ler(int *n) {

    printf("Digite um valor: ");
    scanf("%i", n);
}
int main() {

    int *p;
    p = (int *) malloc(sizeof(int));
    ler(p);

    printf("VALOR: %i\n\n", *p);

    free(p);
    system("pause");
    return 0;
}
