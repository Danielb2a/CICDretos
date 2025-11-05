// starter.c
#include <stdio.h>
#include <string.h>
#include "cadenas.h"

// (funciones mi_strlen, mi_strcmp, mi_strcpy iguales que antes...)

#ifndef TESTING
int main(void) {
    char origen[] = "Hola";
    char destino[20];

    printf("\n--- DEMOSTRACIÓN FUNCIONES DE CADENAS ---\n");

    printf("Longitud de '%s': %zu\n", origen, mi_strlen(origen));
    printf("Comparación 'Hola' vs 'Hola': %d\n", mi_strcmp("Hola", "Hola"));
    printf("Comparación 'Hola' vs 'Adios': %d\n", mi_strcmp("Hola", "Adios"));
    mi_strcpy(destino, origen);
    printf("Copia de cadena: '%s'\n", destino);

    return 0;
}
#endif
