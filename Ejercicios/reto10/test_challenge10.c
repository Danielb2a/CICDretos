#include <assert.h>
#include <stdio.h>

int suma(int a, int b);

int main() {
    printf("Ejecutando tests...\n");
    assert(suma(2, 3) == 5);
    assert(suma(-2, 2) == 0);
    printf("✅ Todos los tests pasaron correctamente.\n");
    return 0;
}
