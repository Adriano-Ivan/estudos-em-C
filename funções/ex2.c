#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcular_area(float a, float b);

int main() {

    setlocale(LC_ALL, "Portuguese");
    float altura, base, area;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite a base: ");
    scanf("%f", &base);

    area = calcular_area(altura, base);

    printf("A área do retângulo é igual a %.2fm²\n\n", area);
    system("PAUSE");
    return 0;
}

float calcular_area(float a, float b) {

    return a * b;
}
