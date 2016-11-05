#include <stdio.h>
#include <stdlib.h>
#include "printer.h"

int readInt(int min, int max)
{
    int res;
    int ret = scanf("%d", &res);
    
    if (ret == 0 || res < min || res > max) {
        return min - 1;
    }
    
    return res;
}

char *readString() {
    char *string = malloc(sizeof(char) * 10);
    scanf("%s", string);
    return string;
}