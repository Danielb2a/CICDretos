#include "cadenas.h"
#include <stddef.h>  // para size_t

// ---------------------------------------------------------
// Función: mi_strlen
// Descripción: Calcula la longitud de una cadena (sin contar '\0').
// ---------------------------------------------------------
size_t mi_strlen(const char *s) {
    size_t len = 0;
    if (s == NULL) return 0;  // Manejo de puntero nulo
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

// ---------------------------------------------------------
// Función: mi_strcmp
// Descripción: Compara dos cadenas carácter a carácter.
// Devuelve 0 si son iguales, <0 si s1 < s2, >0 si s1 > s2.
// ---------------------------------------------------------
int mi_strcmp(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) return -1;  // Validación
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

// ---------------------------------------------------------
// Función: mi_strcpy
// Descripción: Copia el contenido de src en dest (incluye '\0').
// Devuelve un puntero al destino.
// ---------------------------------------------------------
char *mi_strcpy(char *dest, const char *src) {
    if (dest == NULL || src == NULL) return NULL;  // Validación
    char *ptr = dest;
    while ((*ptr++ = *src++));  // Copia hasta '\0'
    return dest;
}
