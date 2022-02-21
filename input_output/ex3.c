#include <stdio.h>
#include <stdlib.h>

int main() {

    char x[100];

    printf("DIGITE ALGO: ");
    int i = 0;
    while((x[i] = getc(stdin)) != '\n') {
          i++;
    }

    x[++i] = '\0';

    printf("%s\n", x);

    system("pause");
    return 0;
}
