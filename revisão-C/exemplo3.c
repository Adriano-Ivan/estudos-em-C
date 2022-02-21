#include <stdio.h>
#include <stdlib.h>

int main() {

    char palavra1[] = {'B','r','a','s','i','l'};
    char palavra2[6] = {'B','r','a','s','i','l'};
    char palavra3[] = {"Brasil"};
    char palavra4[7] = {"Brasil"};
    char palavra[] = "Brasil";

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);
    printf("%s\n", palavra3);
    printf("%s\n", palavra4);
    printf("%s", palavra);

    printf("\n\n");
    system("PAUSE");
    return 0;
}
