#include <stdio.h>
#include "calc.h"

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

#ifndef TESTING
int main() {
    printf("Programa listo para CI Matrix\n");
    return 0;
}
#endif
