#include <stdio.h>
#include <stdlib.h>

#define SIM 100
#define NAO -100

int main() {

    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    if(x <= 10) {
        printf("%i\n", NAO);
    } else {
        printf("%i\n", SIM);
    }
    system("pause");
    return 0;
}
