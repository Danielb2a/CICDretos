#include <stdio.h>
#include "calc.h"

int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
int multiplicacion(int a, int b) { return a * b; }

int division(int a, int b) {
    if (b == 0) {
        printf("Error: division entre cero.\n");
        return 0;
    }
    return a / b;
}

#ifndef TESTING   // 👈 este bloque evita que se compile el main cuando hacemos pruebas
int main(void) {
    int opcion, a, b;

    do {
        printf("\n--- CALCULADORA SIMPLE ---\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Introduce el primer numero: ");
            scanf("%d", &a);
            printf("Introduce el segundo numero: ");
            scanf("%d", &b);
        }

        switch (opcion) {
            case 1: printf("Resultado: %d\n", suma(a, b)); break;
            case 2: printf("Resultado: %d\n", resta(a, b)); break;
            case 3: printf("Resultado: %d\n", multiplicacion(a, b)); break;
            case 4: printf("Resultado: %d\n", division(a, b)); break;
            case 5: printf("Saliendo...\n"); break;
            default: printf("Opcion no valida.\n");
        }
    } while (opcion != 5);

    return 0;
}
#endif
