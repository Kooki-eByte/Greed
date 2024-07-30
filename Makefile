CC = gcc
CFLAG = -Wall -Werror
TARGET = lib/greed

all: $(TARGET).lib

$(TARGET).lib: lib/g_logger.o
	ar rcs $@ $^

lib/g_logger.o: src/g_logger.c
	$(CC) $(CFLAG) -c $^ -o $@

clean:
	rm -f lib/*.o lib/*.lib
