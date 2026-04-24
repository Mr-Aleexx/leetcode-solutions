CC = g++
CFLAGS = -Wall -Wextra
DEBUG_CFLAGS = -DDEBUG -g -O0 -fsanitize=address

all: run

run: point
	./furthest_point_from_origin

point:
	$(CC) -o furthest_point_from_origin furthest_point_from_origin.cpp $(CFLAGS) 

debug:
	$(CC) -o furthest_point_from_origin furthest_point_from_origin.cpp $(CFLAGS)  $(DEBUG_FLAGS)

clean:
	rm -rf furthest_point_from_origin.cpp

