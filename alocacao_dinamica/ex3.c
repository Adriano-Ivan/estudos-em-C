#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *) malloc(sizeof(int));

    *p = 1000;

    printf("%i\n", *p);

    free(p);

    printf("%i\n", *p);

    //int *m = (int *) malloc(sizeof(int));

    return 0;
}
