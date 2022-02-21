#include <stdio.h>
#include <stdlib.h>

void dobrar(int *p) {

    printf("Digite o valor: ");
    scanf("%i", p);

    *p = *p * 2;
}

int main() {

    int *ponteiroDobra;
    ponteiroDobra = (int *) malloc(sizeof(int));

    dobrar(ponteiroDobra);

    printf("%d\n\n", *ponteiroDobra);

    free(ponteiroHora);
    system("pause");
    return 0;
}
