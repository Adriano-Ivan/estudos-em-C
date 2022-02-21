#include <stdio.h>
#include <stdlib.h>

int fat(int num) {
    if(num == 0) {
        return 1;
    } else {
        return num * fat(num - 1);
    }
}
int main() {

    int n, r;
    printf("FATORIAL: ");
    scanf("%d", &n);
    r = fat(n);
    printf("\n%d\n", r);

    system("pause");
    return 0;
}
