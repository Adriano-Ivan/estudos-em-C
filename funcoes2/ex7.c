#include <stdio.h>
#include <stdlib.h>

int main() {

    void funcaoPrint(int x[3][3]);
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    funcaoPrint(matriz);

    system("pause");
    return 0;
}

void funcaoPrint(int x[][3]) {

    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("%i ", x[l][c]);
        }
        printf("\n");
    }
}
