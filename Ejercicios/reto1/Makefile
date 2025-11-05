# Compilador
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Archivos
MAIN = starter.c
TEST = test_challenge01.c
TARGET = main
TEST_TARGET = test

# Reglas
all: $(TARGET)

$(TARGET): $(MAIN)
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN)

test: $(MAIN) $(TEST)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(MAIN) $(TEST)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
