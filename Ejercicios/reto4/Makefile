# Makefile avanzado para Challenge 04

NAME = calc
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = main.c suma.c resta.c multiplicacion.c division.c
OBJ = $(SRC:.c=.o)
FUNC_OBJ = suma.o resta.o multiplicacion.o division.o
TEST_SRC = test_challenge04.c
TEST_OBJ = $(TEST_SRC:.c=.o)
INCLUDES = calc.h

# Regla principal
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Compilación de objetos
%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

# Ejecutar pruebas unitarias
test: $(FUNC_OBJ) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(FUNC_OBJ) $(TEST_OBJ) -o test
	./test

# Limpieza de objetos
clean:
	rm -f $(OBJ) $(TEST_OBJ)

# Limpieza completa
fclean: clean
	rm -f $(NAME) test

# Reconstruir todo
re: fclean all

.PHONY: all clean fclean re test
