#include <stdio.h>
#include <stdlib.h>

int main() {

    char x[100];

    FILE *file = fopen("arquivo2.txt", "r");

    fgets(x, 100, file);
    printf("%s\n", x);

    freopen("arquivo.txt", "r", file);
    fgets(x, 100, file);
    printf("%s\n", x);
    system("pause");
    return 0;
}
