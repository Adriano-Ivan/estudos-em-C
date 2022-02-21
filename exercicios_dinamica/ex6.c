#include <stdio.h>
#include <stdlib.h>

void apresentar(int *a) {

    printf("Number %i\n\n", *a);
}

int main() {

    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 5023;

    apresentar(p);

    free(p);
    system("pause");
    return 0;
}
