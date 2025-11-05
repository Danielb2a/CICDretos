#include <stdio.h>
#include <assert.h>

int suma(int a, int b);
int resta(int a, int b);

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void) {
    printf("\n===== INICIO DE PRUEBAS =====\n");

    int total_tests = 0;
    int passed_tests = 0;

    total_tests++;
    if (suma(2, 3) == 5) {
        printf(GREEN "✔ Test suma(2,3) = 5 OK\n" RESET);
        passed_tests++;
    } else {
        printf(RED "✖ Test suma(2,3) FAILED\n" RESET);
    }

    total_tests++;
    if (resta(5, 3) == 2) {
        printf(GREEN "✔ Test resta(5,3) = 2 OK\n" RESET);
        passed_tests++;
    } else {
        printf(RED "✖ Test resta(5,3) FAILED\n" RESET);
    }

    printf("\n===== RESULTADOS =====\n");
    printf("Pasados: %d / %d\n", passed_tests, total_tests);

    if (passed_tests == total_tests)
        printf(GREEN "✅ TODAS LAS PRUEBAS PASARON ✅\n" RESET);
    else
        printf(RED "❌ ALGUNAS PRUEBAS FALLARON ❌\n" RESET);

    return (passed_tests == total_tests) ? 0 : 1;
}
