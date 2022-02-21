#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct x {
    int a;
    int b;
    int c;
};
//malloc, calloc, realloc, free, sizeof
int main() {

    int x;
    int vetor[10];
    double y;
    struct x exemplo;

    printf("%li\n", sizeof(x));
    printf("%li\n", sizeof(y));
    printf("%li\n", sizeof(bool));
    printf("%li\n", sizeof(short));
    printf("%li\n", sizeof(vetor));
    printf("%li\n", sizeof(exemplo));

    system("pause");
    return 0;
}
