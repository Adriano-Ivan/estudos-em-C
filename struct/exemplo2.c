#include <stdio.h>
#include <stdlib.h>

int main() {

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora;

    agora.horas = 14;
    agora.minutos = 50;
    agora.segundos = 34;

    struct horario depois;

    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'A';

    printf("%i\n", depois.horas);
    printf("%i\n", depois.minutos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    printf("%i:%i:%i\n\n", agora.horas, agora.minutos, agora.segundos);
    system("PAUSE");
    return 0;
}
