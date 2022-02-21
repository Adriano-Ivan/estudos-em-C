#include <stdio.h>
#include <stdlib.h>

#define MAIOR(x, y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main() {

    char x = 'G';
    if(E_MINUSCULO(x)) {
        printf("E uma letra minuscula.\n\n");
    } else {
        printf("Nao e uma letra minuscula.\n\n");
    }

    printf("%i\n\n", MAIOR(109, 78));
    system("pause");
    return 0;
}
