#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *)malloc(sizeof(int));

    if(p == NULL) {
        printf("A funcao nao funcionou.\n");
    }
    printf("%d\n", *p);

    system("pause");
    return 0;
}
