CC = clang
CFLAGS = -Wall -Wextra -std=c11
SRC = src/main.c
OUT = bin/app

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
