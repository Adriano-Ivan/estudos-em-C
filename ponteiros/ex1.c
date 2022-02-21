#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y;

    printf("%i\n\n", x);


    getchar();

    system("PAUSE");
    return 0;
}
