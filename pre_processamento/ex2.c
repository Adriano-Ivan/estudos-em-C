#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
#define NULO 0

double areaCirculo(double raio) {
    return raio * raio * PI;
}

int main() {

    double areaCirculo(double raio);

    double r;
    int i = 3;

    while(i != 0) {
        printf("Digite o raio do circulo: ");
        scanf("%lf", &r);
        printf("A area do circulo e %lf\n", areaCirculo(r));
        --i;
    }

    getchar();
    system("pause");
    return 0;
}
