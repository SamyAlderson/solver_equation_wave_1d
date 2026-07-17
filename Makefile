CC=gcc
CFLAGS=-Wall -Wextra -std=c11

SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
BIN=solver_equation_wave_1d

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(BIN)

test:
	@echo "No tests configured"

.PHONY: all clean test
