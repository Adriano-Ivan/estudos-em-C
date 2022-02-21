#include <stdio.h>
#include <stdlib.h>

int main() {

    float altura, largura, res;
    float calcularAreaRetangulo(float a, float l);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    res = calcularAreaRetangulo(altura, largura);

    printf("A area e %.2fm²\n\n", res);

    return 0;
}

float calcularAreaRetangulo(float x, float y) {

    return x * y;
}
