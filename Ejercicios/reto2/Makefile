CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET_MAIN = main
TARGET_TEST = test

all: $(TARGET_MAIN)

$(TARGET_MAIN): starter.c
	$(CC) $(CFLAGS) starter.c -o $(TARGET_MAIN)

test: 
	$(CC) $(CFLAGS) -DTESTING starter.c test_challenge02.c -o $(TARGET_TEST)

clean:
	rm -f *.o $(TARGET_MAIN) $(TARGET_TEST)
