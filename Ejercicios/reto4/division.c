#include <stdio.h>
#include "calc.h"

int division(int a, int b) {
    if (b == 0) {
        printf("Error: división entre cero.\n");
        return 0;
    }
    return a / b;
}
