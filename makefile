all: prompt.o
	cc -std=c99 -Wall -ledit prompt.o -o prompt

prompt.o: prompt.c
	cc -std=c99 -Wall -c prompt.c -o prompt.o

clean:
	rm prompt.o prompt
