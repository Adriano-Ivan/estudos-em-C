#include <stdio.h>
#include <stdlib.h>

int main() {

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

    agora.horas = 14;
    agora.minutos = 47;
    agora.segundos = 32;

    printf("%i:%i:%i\n\n", agora.horas, agora.minutos, agora.segundos);
    return 0;
}
