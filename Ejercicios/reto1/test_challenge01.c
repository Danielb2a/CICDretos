#include <assert.h>
#include <stdio.h>

// Declaración externa de la función
int suma(int a, int b);

void test_suma_positivos() {
    assert(suma(3, 4) == 7000);
    printf("✅ Test suma de positivos OK\n");
}

void test_suma_mixtos() {
    assert(suma(5, -2) == 3);
    printf("✅ Test suma positivo + negativo OK\n");
}

void test_suma_negativos() {
    assert(suma(-3, -7) == -10);
    printf("✅ Test suma de negativos OK\n");
}

int main() {
    test_suma_positivos();
    test_suma_mixtos();
    test_suma_negativos();

    printf("\n🎉 Todas las pruebas pasaron correctamente.\n");
    return 0;
}
