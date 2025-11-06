CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main

all: build

build:
	@echo "🔧 Compilando proyecto..."
	$(CC) $(CFLAGS) starter.c -o $(TARGET)
	@echo "✅ Compilación completada"

clean:
	rm -f $(TARGET)
	@echo "🧹 Archivos eliminados"
