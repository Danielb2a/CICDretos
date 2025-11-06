#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    printf("Resultado de suma(2,3): %d\n", suma(2,3));
    printf("Resultado de resta(5,3): %d\n", resta(5,3));
    return 0;
}
