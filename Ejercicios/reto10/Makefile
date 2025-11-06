CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = reto10
TEST = test_reto10

all: build

build:
	@echo "🔧 Compilando aplicación..."
	$(CC) $(CFLAGS) starter.c -o $(TARGET)
	@echo "✅ Compilación completada"

test:
	@echo "🚀 Ejecutando pruebas..."
	$(CC) $(CFLAGS) starter.c test_challenge10.c -o $(TEST)
	./$(TEST)

clean:
	rm -f $(TARGET) $(TEST)
