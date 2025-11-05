# Makefile para Challenge 05

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = starter.c test_challenge05.c
TARGET = test

# Regla principal: compilar ejecutable
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Ejecutar pruebas usando el script
test:
	./run_tests.sh

# Limpiar objetos (no hay .o aquí, pero por consistencia)
clean:
	rm -f *.o

# Limpiar todo (ejecutable)
fclean: clean
	rm -f $(TARGET)

# Reconstruir todo
re: fclean all

.PHONY: all test clean fclean re
