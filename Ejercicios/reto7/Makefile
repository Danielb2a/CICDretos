CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main
TEST = test_challenge07.c

.PHONY: all build test clean

all: build test

build: starter.c
	@echo "🔧 Compilando proyecto..."
	$(CC) $(CFLAGS) starter.c -o $(TARGET)
	@echo "✅ Compilación completada"

test: build $(TEST)
	@echo "🚀 Ejecutando pruebas..."
	$(CC) $(CFLAGS) -DTESTING starter.c $(TEST) -o test
	-@./test
	@echo "✅ Tests finalizados"

clean:
	@rm -f $(TARGET) test
	@echo "🧹 Archivos eliminados"
