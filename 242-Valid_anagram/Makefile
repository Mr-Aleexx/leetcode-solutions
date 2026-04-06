CC = g++
CFLAGS = -Wall -Wextra
DEBUG_CFLAGS = -DDEBUG -g -O0 -fsanitize=address

all: run

run: valid_anagram
	./valid_anagram

clock:
	$(CC) -o valid_anagram valid_anagram.cpp $(CFLAGS) 

debug:
	$(CC) -o valid_anagram valid_anagram.cpp $(CFLAGS)  $(DEBUG_FLAGS)

clean:
	rm -rf valid_anagram.cpp

