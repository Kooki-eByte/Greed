CC = gcc
CFLAG = -Wall -Werror
OUT = bin/greed

SRC_CORE = ./src/greed.c

all: 
	$(CC) -std=c99 $(CFLAG) $(SRC_CORE) -o $(OUT)  

clean:
	rm -rf ./bin/greed
