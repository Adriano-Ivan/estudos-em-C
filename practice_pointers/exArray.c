#include <stdio.h>
#include <stdlib.h>

void apresentar(int *p) {
    for(int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
}

void inicializar(int *p) {
    int a = 0;
    for(int i = 5; i < 10; i++) {
        *(p + a) = i;
        a++;
    }
}
int main() {

    int *p;
    int a = 0;
    p = (int *) malloc(5 * sizeof(int));

    inicializar(p);
    apresentar(p);

    system("pause");
    return 0;
}
