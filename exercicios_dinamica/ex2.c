#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;

    p = (int *) malloc(sizeof(int));

    *p = 23;

    printf("%i\n\n", *p);

    free(p);
    system("pause");
    return 0;
}
