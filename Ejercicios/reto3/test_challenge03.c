#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cadenas.h"

int tests_passed = 0;
int tests_failed = 0;

void test_case_str(const char *name, int condition) {
    printf("\n[TEST] %s\n", name);
    if (condition) {
        printf("  ✅ OK\n");
        tests_passed++;
    } else {
        printf("  ❌ FAIL\n");
        tests_failed++;
    }
    assert(condition && "Error en test de cadenas");
}

int main(void) {
    printf("\n===== INICIO DE PRUEBAS: FUNCIONES DE CADENAS =====\n");

    // mi_strlen
    test_case_str("mi_strlen('Hola') == strlen('Hola')",
        mi_strlen("Hola") == strlen("Hola"));
    test_case_str("mi_strlen('') == strlen('')",
        mi_strlen("") == strlen(""));
    test_case_str("mi_strlen(NULL) == 0",
        mi_strlen(NULL) == 0);

    // mi_strcmp
    test_case_str("mi_strcmp('Hola', 'Hola') == 0",
        mi_strcmp("Hola", "Hola") == 0);
    test_case_str("mi_strcmp('Hola', 'Adios') > 0",
        mi_strcmp("Hola", "Adios") > 0);
    test_case_str("mi_strcmp('Adios', 'Hola') < 0",
        mi_strcmp("Adios", "Hola") < 0);

    // mi_strcpy
    char dest1[20];
    char dest2[20];
    mi_strcpy(dest1, "Prueba");
    strcpy(dest2, "Prueba");
    test_case_str("mi_strcpy copia correctamente",
        strcmp(dest1, dest2) == 0);

    printf("\n===== RESUMEN =====\n");
    printf("✅ Aprobadas: %d\n", tests_passed);
    printf("❌ Fallidas : %d\n", tests_failed);
    printf("===================\n");

    if (tests_failed > 0) {
        printf("\n❌ Se detectaron errores en las pruebas.\n");
        return 1;
    } else {
        printf("\n✅ Todas las pruebas pasaron correctamente.\n");
        return 0;
    }
}
