CC = gcc
CFLAGS = -Wall -Wextra
DEBUG_CFLAGS = -DDEBUG -g -O0 -fsanitize=address

all: run

run: clock
	./is_balanced

clock:
	$(CC) -o id_balanced is_balanced.c $(CFLAGS) 

debug:
	$(CC) -o is_balanced is_balanced.c $(CFLAGS)  $(DEBUG_FLAGS)

clean:
	rm -rf is_balanced

