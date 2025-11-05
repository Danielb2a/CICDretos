#include <stdio.h>

// Declaración de la función
int suma(int a, int b) {
    return a + b;
}

// Programa principal (pide los números al usuario y limpia memoria)
int main() {
    int a = 0, b = 0, resultado = 0;

    printf("Introduce el primer número: ");
    if (scanf("%d", &a) != 1) {
        printf("Error: entrada no válida.\n");
        return 1;
    }

    printf("Introduce el segundo número: ");
    if (scanf("%d", &b) != 1) {
        printf("Error: entrada no válida.\n");
        return 1;
    }

    resultado = suma(a, b);
    printf("La suma de %d y %d es: %d\n", a, b, resultado);

    // “Limpieza” de memoria (por buenas prácticas)
    a = b = resultado = 0;

    // Cerrar posibles flujos abiertos (aquí solo stdin/stdout)
    fflush(stdin);
    fflush(stdout);

    return 0;
}