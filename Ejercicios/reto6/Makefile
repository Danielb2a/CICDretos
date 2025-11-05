# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main
DIST = dist

# Archivos
SRC = starter.c
TEST = test_challenge06.c

.PHONY: all build test package clean

# -------------------------------------------------------------------
# Regla por defecto: ejecuta todo el pipeline
all: build test package

# -------------------------------------------------------------------
# Build: compila el binario principal
build: $(SRC)
	@echo -e "🔧 Compilando el proyecto..."
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
	@echo -e "✅ Compilación principal completada\n"

# -------------------------------------------------------------------
# Test: compila y ejecuta tests unitarios
# -DTESTING evita que el main de starter.c se compile
# '-' delante de './test' permite continuar aunque haya fallos
test: build $(TEST)
	@echo -e "🚀 Ejecutando pruebas unitarias..."
	$(CC) $(CFLAGS) -DTESTING $(SRC) $(TEST) -o test
	-@./test
	@echo -e "\n✅ Tests completados (pipeline continúa aunque haya fallos)\n"

# -------------------------------------------------------------------
# Package: copia binario final a dist/
package: build
	@mkdir -p $(DIST)
	@cp $(TARGET) $(DIST)/
	@echo -e "📦 Binario final copiado en $(DIST)/\n"

# -------------------------------------------------------------------
# Clean: elimina binarios y objetos
clean:
	@rm -f $(TARGET) test
	@echo -e "🧹 Archivos temporales eliminados\n"
