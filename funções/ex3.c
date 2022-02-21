#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcular(float n1, float n2, char sinal);
float somar(float n1, float n2);
float subtrair(float n1, float n2);
float multiplicar(float n1, float n2);
float dividir(float n1, float n2);


int main() {

    setlocale(LC_ALL, "Portuguese");
    float n1, n2, res;
    char operacao;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);
    printf("Digite a opera��o: (*, +, -, /)");
    scanf(" %c", &operacao);

    if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') {
        printf("Escolha uma das opera��es v�lidas, por favor.\n\n");
    }
    else {

        res = calcular(n1, n2, operacao);

        if(res == -1) {
            printf("N�o � poss�vel dividir um n�mero por 0 ! Por favor, tente novamente.\n\n");
        }
        else{
            printf("O resultado da opera��o escolhida entre os dois n�meros � %.2f\n\n", res);
        }

    }

    system("PAUSE");
    return 0;
}

float calcular(float n1, float n2, char operacao) {

    float resultado;

    if(operacao == '+') {
        resultado = somar(n1, n2);
        return resultado;
    }
    else if(operacao == '-') {
        resultado = subtrair(n1, n2);
        return resultado;
    }
    else if(operacao == '*') {
        resultado = multiplicar(n1, n2);
        return resultado;
    }
    else if(operacao == '/') {
        resultado = dividir(n1, n2);
        return resultado;
    }
}

float somar(float n1, float n2) {
    return n1 + n2;
}

float subtrair(float n1, float n2) {
    return n1 - n2;
}

float multiplicar(float n1, float n2){
    return n1 * n2;
}

float dividir(float n1, float n2) {
    if(n2 == 0) {
        return -1;
    }
    else {
        return n1 / n2;
    }
}
