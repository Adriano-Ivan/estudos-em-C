#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct horario {

    int hora;
    int minuto;
    int segundo;
};

int main() {

    setlocale(LC_ALL, "Portuguese");
    void receberHorarios(struct horario list[5]);
    void printHorarios(struct horario list[5]);

    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printHorarios(listaHorarios);
    system("PAUSE");
    return 0;
}

void receberHorarios(struct horario lista[5]) {

    for(int i = 0; i < 5; i++) {
        printf("Digite o %i horario(hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
    }
}

void printHorarios(struct horario lista[5]) {

    for(int i = 0; i < 5; i++) {
        printf("O %i horario e = %i:%i:%i\n", i + 1, lista[i].hora, lista[i].minuto, lista[i].segundo);
    }
}
