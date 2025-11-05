#include <stdio.h>
#include <assert.h>
#include "calc.h"

int tests_passed = 0;
int tests_failed = 0;

void test_case(const char *name, int expected, int result) {
    printf("\n[TEST] %s\n", name);
    printf("  Esperado: %d\n", expected);
    printf("  Obtenido: %d\n", result);

    if (expected == result) {
        printf("  ✅ OK\n");
        tests_passed++;
    } else {
        printf("  ❌ FAIL\n");
        tests_failed++;
    }

    // Asegura que el test falle si el resultado no es correcto
    assert(expected == result);
}

int main(void) {
    printf("\n===== INICIO DE PRUEBAS =====\n");

    test_case("Suma 3 + 2", 5, suma(3, 2));
    test_case("Resta -5 - -2", -3, resta(-5, -2));
    test_case("Multiplicación 3 * 4", 12, multiplicacion(3, 4));
    test_case("División 8 / 2", 4, division(8, 2));
    test_case("División 8 / 0 (error controlado)", 0, division(8, 0));

    printf("\n===== RESUMEN =====\n");
    printf("✅ Aprobadas: %d\n", tests_passed);
    printf("❌ Fallidas : %d\n", tests_failed);
    printf("===================\n");

    return tests_failed > 0 ? 1 : 0;
}
