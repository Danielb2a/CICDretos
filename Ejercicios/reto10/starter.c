#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int a = 3, b = 5;
    printf("Resultado de la suma: %d + %d = %d\n", a, b, suma(a, b));
    return 0;
}
