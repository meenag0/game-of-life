CC=clang++
CFLAGS=-std=c++14 -g
LDFLAGS=-lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreAudio -framework CoreVideo

main: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main $(LDFLAGS)
