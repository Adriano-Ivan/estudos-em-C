#include <stdio.h>
#include <stdlib.h>

int main() {

    float somaDeDigitos(float numberOne, float numberTwo);
    float x, y, soma;

    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);

    soma = somaDeDigitos(x, y);

    printf("O resultado da soma entre %.2f e %.2f e igual a %.2f\n\n", x, y, soma);
    system("pause");
    return 0;
}

float somaDeDigitos(float firstNumber, float secondNumber) {

    float valorAbsoluto(float x);

    float num1, num2;

    num1 = firstNumber;
    num2 = secondNumber;

    if(firstNumber < 0) {
        num1 = valorAbsoluto(firstNumber);
    }

    if(secondNumber < 0) {
        num2 = valorAbsoluto(secondNumber);
    }

    return num1 + num2;
}

float valorAbsoluto(float number) {

    return number * -1;
}
