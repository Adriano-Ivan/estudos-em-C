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
    depois->minuto = 32;
    depois->segundo = 17;

    printf("%i:%i:%i\n\n", agora.hora, agora.minuto, agora.segundo);


    system("PAUSE");
    return 0;
}
