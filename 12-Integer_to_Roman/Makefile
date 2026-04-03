CC = gcc
CFLAGS = -Wall -Wextra 
DEBUG_CFLAGS = -DDEBUG -g -O0 -fsanitize=address


all: run

run: clock
	./integer_to_roman

clock: 
	$(CC) -o integer_to_roman integer_to_roman.c $(CFLAGS) 

debug:
	$(CC) -o integer_to_roman integer_to_roman.c $(CFLAGS)  $(DEBUG_FLAGS)

clean: 
	rm -rf integer_to_roman

