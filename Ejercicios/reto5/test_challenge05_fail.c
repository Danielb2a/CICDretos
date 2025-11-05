#include <stdio.h>
#include "starter.h"

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

// Macro para test con línea y expresión
#define TEST(expr) do { \
    total_tests++; \
    if (expr) { \
        printf(GREEN "✔ Test " #expr " OK (line %d)\n" RESET, __LINE__); \
        passed_tests++; \
    } else { \
        printf(RED "✖ Test " #expr " FAILED (line %d)\n" RESET, __LINE__); \
    } \
} while(0)

int main(void) {
    int total_tests = 0;
    int passed_tests = 0;

    printf("\n===== INICIO DE PRUEBAS =====\n");

    // Tests
    TEST(suma(2,3) == 5);      // Correcto
    TEST(suma(2,2) == 5);      // Fallo intencionado
    TEST(resta(5,3) == 2);     // Correcto
    TEST(resta(3,5) == 2);     // Fallo intencionado

    printf("\n===== RESUMEN =====\n");
    printf("Pasados: %d / %d\n", passed_tests, total_tests);

    if (passed_tests == total_tests)
        printf(GREEN "✅ TODAS LAS PRUEBAS PASARON ✅\n" RESET);
    else
        printf(RED "❌ ALGUNAS PRUEBAS FALLARON ❌\n" RESET);

    return (passed_tests == total_tests) ? 0 : 1;
}
