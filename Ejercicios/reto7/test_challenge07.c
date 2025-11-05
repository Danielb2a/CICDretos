#include <stdio.h>
#include <assert.h>

int suma(int a, int b);

int main() {
    int tests_passed = 0;
    int tests_failed = 0;

    printf("\n===== INICIO DE PRUEBAS =====\n");

    // Test correcto
    if (suma(2,3) == 5) { 
        printf("✔ Test suma(2,3) = 5 OK (line %d)\n", __LINE__); 
        tests_passed++; 
    } else { 
        printf("✖ Test suma(2,3) FAILED (line %d) | Causa: suma(2,3) != 5\n", __LINE__); 
        tests_failed++; 
    }

    // Test intencionadamente fallido
    if (suma(2,2) == 5) { 
        printf("✔ Test suma(2,2) = 5 OK (line %d)\n", __LINE__); 
        tests_passed++; 
    } else { 
        printf("✖ Test suma(2,2) FAILED (line %d) | Causa: suma(2,2) != 5\n", __LINE__); 
        tests_failed++; 
    }

    printf("\n===== RESUMEN =====\n");
    printf("Pasados: %d / %d\n", tests_passed, tests_passed + tests_failed);
    if(tests_failed > 0) {
        printf("❌ ALGUNAS PRUEBAS FALLARON ❌\n");
        return 1;
    } else {
        printf("✅ TODAS LAS PRUEBAS PASARON ✅\n");
        return 0;
    }
}
