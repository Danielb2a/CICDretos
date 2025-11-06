#include <stdio.h>
#include "calc.h"

int tests_passed = 0;
int tests_failed = 0;

void test_case(const char *name, int expected, int result) {
    printf("[TEST] %s: esperado=%d, obtenido=%d -> ", name, expected, result);
    if (expected == result) {
        printf("✅ OK\n");
        tests_passed++;
    } else {
        printf("❌ FAIL\n");
        tests_failed++;
    }
}

int main() {
    printf("===== INICIO DE PRUEBAS =====\n");
    
    test_case("Suma 2+3", 5, suma(2,3));
    test_case("Suma 2+2 (fallo intencionado)", 5, suma(2,2));
    test_case("Resta 5-3", 2, resta(5,3));

    printf("===== RESUMEN =====\n");
    printf("Pasadas: %d\n", tests_passed);
    printf("Fallidas: %d\n", tests_failed);

    return tests_failed > 0 ? 1 : 0;
}
