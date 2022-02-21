#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;
    char x;
    while((x = getchar()) != '\n') {
        putchar(x);
    }
    system("pause");
    return 0;
}
