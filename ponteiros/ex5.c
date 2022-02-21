#include <stdio.h>
#include <stdlib.h>

int main() {

    struct time {
        int *pHour;
        int *pMinute;
        int *pSecond;
    };

    struct time today;

    int hour = 200;
    int minute = 300;
    int second = 400;

    today.pHour = &hour;
    today.pMinute = &minute;
    today.pSecond = &second;

    printf("Hour - %i\n", *today.pHour );
    printf("Minute - %i\n", *today.pMinute );
    printf("Second - %i\n", *today.pSecond);

    *today.pSecond = 1000;
    printf("Hour - %i\n", *today.pSecond);
    system("PAUSE");
    return 0;
}
