CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main
TEST = test

all: build

build:
	@echo "🔧 Compilando proyecto..."
	$(CC) $(CFLAGS) starter.c -o $(TARGET)
	@echo "✅ Compilación completada"

test:
	@echo "🚀 Ejecutando pruebas dentro de contenedor..."
	./$(TARGET)

clean:
	rm -f $(TARGET) $(TEST)
	@echo "🧹 Archivos eliminados"
