#include <stdio.h>
#include <stdlib.h>

int main() {

    int fatorial(int x);
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);
    printf("O fatorial e %d\n\n", resultado);
    system("pause");
    return 0;
}

int fatorial(int number) {

    int resultado;

    if(number == 0) {
        resultado = 1;
    } else {
        resultado = number * fatorial(number - 1);
    }

    return resultado;

}
