#include <stdio.h>
#include "starter.h"  // Incluye las funciones suma y resta

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

int main(void) {
    int total_tests = 0;
    int passed_tests = 0;

    printf("\n===== INICIO DE PRUEBAS =====\n");

    // Test suma correcto
    total_tests++;
    if (suma(2, 3) == 5) {
        printf(GREEN "✔ Test suma(2,3) = 5 OK\n" RESET);
        passed_tests++;
    } else {
        printf(RED "✖ Test suma(2,3) FAILED\n" RESET);
    }

    // Test suma que fallará intencionalmente
    total_tests++;
    if (suma(2, 2) == 5) { // ❌ intención de fallo
        printf(GREEN "✔ Test suma(2,2) = 5 OK\n" RESET);
        passed_tests++;
    } else {
        printf(RED "✖ Test suma(2,2) FAILED\n" RESET);
    }

    // Test resta correcto
    total_tests++;
    if (resta(5, 3) == 2) {
        printf(GREEN "✔ Test resta(5,3) = 2 OK\n" RESET);
        passed_tests++;
    } else {
        printf(RED "✖ Test resta(5,3) FAILED\n" RESET);
    }

    // Test resta que fallará intencionalmente
    total_tests++;
    if (resta(3, 5) == 2) { // ❌ intención de fallo
        printf(GREEN "✔ Test resta(3,5) = 2 OK\n" RESET);
        passed_tests++;
    } else {
        printf(RED "✖ Test resta(3,5) FAILED\n" RESET);
    }

    printf("\n===== RESUMEN =====\n");
    printf("Pasados: %d / %d\n", passed_tests, total_tests);

    if (passed_tests == total_tests)
        printf(GREEN "✅ TODAS LAS PRUEBAS PASARON ✅\n" RESET);
    else
        printf(RED "❌ ALGUNAS PRUEBAS FALLARON ❌\n" RESET);

    // Retorna 0 si todos pasaron, 1 si alguno falló
    return (passed_tests == total_tests) ? 0 : 1;
}
