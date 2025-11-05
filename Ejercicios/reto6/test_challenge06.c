#include <stdio.h>
#include "starter.h"

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

int total_tests = 0;
int passed_tests = 0;

// Macro con mensaje y expresión (causa)
#define TEST_C(msg, expr) do { \
    total_tests++; \
    if (expr) { \
        printf(GREEN "✔ %s OK (line %d)\n" RESET, msg, __LINE__); \
        passed_tests++; \
    } else { \
        printf(RED "✖ %s FAILED (line %d) | Causa: %s\n" RESET, msg, __LINE__, #expr); \
    } \
} while(0)

int main() {
    printf("\n===== INICIO DE PRUEBAS =====\n");

    TEST_C("Suma 2 + 3", suma(2,3) == 5);
    TEST_C("Suma 2 + 2 (fallo intencionado)", suma(2,2) == 5);
    TEST_C("Resta 5 - 3", resta(5,3) == 2);

    printf("\n===== RESUMEN =====\n");
    printf("Pasados: %d / %d\n", passed_tests, total_tests);

    if (passed_tests == total_tests)
        printf(GREEN "✅ TODAS LAS PRUEBAS PASARON ✅\n" RESET);
    else
        printf(RED "❌ ALGUNAS PRUEBAS FALLARON ❌\n" RESET);

    return (passed_tests == total_tests) ? 0 : 1;
}
