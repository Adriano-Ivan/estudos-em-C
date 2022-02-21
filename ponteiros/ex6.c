#include <stdio.h>
#include <stdlib.h>

int main(void) {

    void testeVariavel(int x);
    void testePonteiro(int *px);
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste);
    //testePonteiro(pTeste);

    printf("%i\n", teste);

    getchar();
    system("pause");
    return 0;
}

void testeVariavel(int x) {
    ++x;
    printf("%i\n", x);
}
void testePonteiro(int *pX) {
    ++*pX;
}
