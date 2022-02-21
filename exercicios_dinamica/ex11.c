#include <stdio.h>
#include <stdlib.h>

void apresentar(int *a) {
    for(int i = 0; i < 3; i++) {
        printf("%i\n\n", *(a + i));
    }
}

void inicializar(int *p) {
    *p = 10;
    p[1] = 15;
    *(p + 2) = 23;
}
int main() {
    int *p;

    p = (int *) malloc(3*sizeof(int));

    inicializar(p);
    apresentar(p);

    system("pause");
    return 0;
}
