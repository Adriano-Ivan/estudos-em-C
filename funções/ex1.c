#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimir_area(float b, float a );

int main() {

    setlocale(LC_ALL, "Portuguese");
    float altura, base;

    printf("Digite a base do ret�ngulo: ");
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
    printf("A �rea do ret�ngulo � igual a %.2fm�\n\n", area);

    return;
}
