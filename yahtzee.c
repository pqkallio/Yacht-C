#include <stdlib.h>
#include <time.h>

void throwDice(int numbers[], int n) {
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++) {
        numbers[i] = (rand() % 6) + 1;
    }
}