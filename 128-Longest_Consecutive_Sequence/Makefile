CC = gcc
CFLAGS = -Wall -Wextra
DEBUG_CFLAGS = -DDEBUG -g -O0 -fsanitize=address

all: run

run: clock
	./longest_sequence

clock:
	$(CC) -o longest_sequence longest_sequence.c $(CFLAGS) 

debug:
	$(CC) -o longest_sequence longest_sequence.c $(CFLAGS)  $(DEBUG_FLAGS)

clean:
	rm -rf longest_sequence.c

