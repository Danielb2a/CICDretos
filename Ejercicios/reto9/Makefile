# Makefile - Reto 9
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Compilar el binario principal
all:
	@echo "🔧 Compilando proyecto..."
	$(CC) $(CFLAGS) starter.c -o main
	@echo "✅ Compilación completada"

# Ejecutar pruebas unitarias
test:
	@echo "🚀 Ejecutando pruebas..."
	$(CC) $(CFLAGS) -DTESTING starter.c test_challenge09.c -o test
	@./test

# Limpiar archivos compilados
clean:
	@echo "🧹 Limpiando archivos..."
	rm -f *.o main test

# Regla por defecto
.PHONY: all test clean
