#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

#ifndef TESTING
int main() {
    printf("Programa listo para CI en GitHub Actions\n");
    return 0;
}
#endif
