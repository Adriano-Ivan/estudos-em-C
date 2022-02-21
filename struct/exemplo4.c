#include <stdio.h>
#include <stdlib.h>

int main() {

    struct horario {
        int horas;
        int minutos;
        int segundos;
    };

    //struct horario agora = {.segundos = 10, .minutos = 33, .horas = 23};

    struct horario teste[5] = {{23, 23, 39}, {23, 32, 53}, {23, 6, 23}, {22, 34, 51}, {21, 23, 23}};

    for(int i = 0; i < 5; i++) {
        printf("%i:%i:%i\n\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
    }

    //teste[0].horas = 10;
    //teste[0].minutos = 20;
    //teste[0].segundos = 30;


    system("PAUSE");
    return 0;
}
