CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main
TEST = test

all: $(TARGET)

$(TARGET): starter.c cadenas.c
	$(CC) $(CFLAGS) starter.c cadenas.c -o $(TARGET)

test: cadenas.c test_challenge03.c
	$(CC) $(CFLAGS) -DTESTING cadenas.c test_challenge03.c -o $(TEST)

run:
	./$(TARGET)

run-test:
	./$(TEST)

clean:
	rm -f $(TARGET) $(TEST) *.o
