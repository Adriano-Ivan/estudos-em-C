#include <stdio.h>
#include <stdlib.h>

float gGlobalVariable;

int main() {

    void teste();

    gGlobalVariable = 13;

    printf("Global: %.0f\n\n", gGlobalVariable);
    teste();
    teste();
    teste();

    return 0;
}

void teste(void) {

    int automaticLocalVariable = 2;
    automaticLocalVariable *= 2;

    static int staticLocalVariable = 2;

    gGlobalVariable *= 2;

    staticLocalVariable*=2;
    printf("%d -> %d\n\n", automaticLocalVariable, staticLocalVariable);
    printf("Global: %.0f\n\n", gGlobalVariable);
}
