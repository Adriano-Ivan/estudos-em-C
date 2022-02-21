#include <stdio.h>
#include <stdlib.h>

int main() {

    char x[] = "cozinha";

    FILE *file = fopen("arquivo4.txt", "w");

    fputc('A', stdout);
    printf("\n");
    int i = 0;
    while(x[i] != '\0') {
        putc(x[i], file);
        i++;
    }

    system("pause");
    return 0;
}
