#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimir_area(float b, float a );

int main() {

    setlocale(LC_ALL, "Portuguese");
    float altura, base;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura da altura: ");
    scanf("%f", &altura);

    imprimir_area(base, altura);

    system("PAUSE");
    return 0;
}

void imprimir_area(float b, float a) {

    float area;

    area = b * a;
    printf("A área do retângulo é igual a %.2fm²\n\n", area);

    return;
}
