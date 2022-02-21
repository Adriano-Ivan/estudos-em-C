#include <stdio.h>
#include <stdlib.h>

int main() {

    char x[10];

    printf("Digite algo: ");
    fgets(x, 20, stdin);
    printf("%s\n", x);

    freopen("arquivo.txt", "r", stdin);
    fgets(x, 20, stdin);
    printf("%s\n\n", x);

    system("pause");
    return 0;
}
