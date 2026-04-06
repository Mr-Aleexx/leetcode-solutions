
CC = gcc
CFLAGS = -Wall -Wextra
DEBUG_CFLAGS = -DDEBUG -g -O0 -fsanitize=address

all: run

run: contains_duplicates
	./contains_duplicates

clock:
	$(CC) -o contains_duplicates contains_duplicates.cpp $(CFLAGS) 

debug:
	$(CC) -o contains_duplicates contains_duplicates.cpp $(CFLAGS)  $(DEBUG_FLAGS)

clean:
	rm -rf contains_duplicates.cpp

