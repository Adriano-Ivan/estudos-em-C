#include <stdio.h>
#include <stdlib.h>

#define MAXNUMBER 2000

void umaFuncao() {
    printf("%i\n", MAXNUMBER);
}

void outraFuncao(){
    printf("%i\n", MAXNUMBER);
}

int main(void) {

    void umaFuncao();
    void outraFuncao();

    printf("%i\n", MAXNUMBER);
    umaFuncao();
    outraFuncao();

    system("pause");
    return 0;

}
