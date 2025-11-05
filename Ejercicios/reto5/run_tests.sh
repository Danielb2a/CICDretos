#!/bin/sh

CC=gcc
CFLAGS="-Wall -Wextra -Werror"
TARGET="test_output"

# Colores
GREEN="\033[0;32m"
RED="\033[0;31m"
YELLOW="\033[1;33m"
RESET="\033[0m"

# Comprobar que el usuario pasó un archivo de test
if [ $# -eq 0 ]; then
    echo -e "${RED}❌ Debes pasar el archivo de test como argumento${RESET}"
    echo "Ejemplo: ./run_tests.sh test_challenge05.c"
    exit 1
fi

TEST_FILE=$1

# Compilar starter.c + archivo de test
echo -e "${YELLOW}🔧 Compilando $TEST_FILE...${RESET}"
$CC $CFLAGS -o $TARGET starter.c $TEST_FILE

if [ $? -ne 0 ]; then
    echo -e "${RED}❌ Error de compilación${RESET}"
    exit 1
fi

# Ejecutar pruebas
echo -e "${YELLOW}🚀 Ejecutando pruebas de $TEST_FILE...${RESET}"
if ./$TARGET; then
    echo -e "${GREEN}✅ TODAS LAS PRUEBAS PASARON${RESET}"
else
    echo -e "${RED}❌ ALGUNAS PRUEBAS FALLARON${RESET}"
fi
