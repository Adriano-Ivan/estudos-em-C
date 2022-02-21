#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;

    p = (int *) calloc(1, 4);

    *p = 32;

    printf("%d\n\n", *p);

    free(p);
    system("pause");
    return 0;
}
