#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    p = (int *) malloc(sizeof(int));
    printf("\nDigite um valor: ");
    scanf("%d", p);

    printf("Valor: %i\n\n", *p);

    free(p);
    system("pause");
    return 0;
}
