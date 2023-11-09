

CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c99 -g
ASFLAGS=-masm=intel
SRC=src
ASM=$(SRC)/asm
OBJ=obj
INC=src
SRCS=$(wildcard $(SRC)/*.c)
ASMSRCS=$(wildcard $(ASM)/*.s)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS)) $(patsubst $(ASM)/%.s, $(OBJ)/%.o, $(ASMSRCS))
DEPS=$(wildcard $(INC)/*.h)

BINDIR=bin
BIN=$(BINDIR)/main

all: $(BIN)

release: CFLAGS= -Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c $(DEPS)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJ)/%.o: $(ASM)/%.s
	$(CC) $(CFLAGS) $(ASFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN) $(OBJS)