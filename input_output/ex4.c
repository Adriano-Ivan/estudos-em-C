#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char x[100];
    FILE *file = fopen("arquivo3.txt", "r");

    printf("DIGITE ALGO: ");

    int i = 0;
    while((x[i] = fgetc(file)) != EOF) {
        i++;
    }

    x[++i] = '\0';

    printf("%s\n\n", x);
    system("pause");
    return 0;
}
