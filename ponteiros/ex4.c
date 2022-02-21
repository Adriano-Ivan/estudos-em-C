#include <stdio.h>
#include <stdlib.h>

int main() {

     struct horario {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;

    depois = &agora;

    depois->hora = 20;
    depois->minuto = 15;
    depois->segundo = 50;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo =  depois->minuto + depois->segundo;

    printf("%i:%i:%i\n\n", antes.hora, antes.minuto, antes.segundo);


    system("PAUSE");
    return 0;
}
