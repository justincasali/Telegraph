CC = g++
CFLAGS = -c -g -Wall -Wextra
LFLAGS = -Wall -Wextra

all: Main

Main: Main.o Morse.o
	$(CC) $(LFLAGS) $^ -o $@

Main.o: Main.cc
	$(CC) $(CFLAGS) $<

Morse.o: Morse.cc
	$(CC) $(CFLAGS) $<

clean:
	rm -f Main
	rm -f *.o
	rm -f *~
