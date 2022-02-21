#include <stdio.h>
#include <stdlib.h>

void dobraValor(int *b);

int main() {

    int a = 20;

    dobraValor(&a);

    printf("%i\n\n", a);
    system("pause");
    return 0;
}

void dobraValor(int *b) {
    *b = 28;
}
/*
int main() {

    int a;
    int *p;

    a = 10;
    p = &a;

    printf("a %p %d\n\n", &a, a);
    printf("p %p %p %i\n\n", &p, p, *p);

    *p = 50;
    printf("a %p %d\n\n", &a, a);
    system("pause");
    return 0;
}
*/
