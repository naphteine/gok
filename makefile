all: parsing.o mpc.o
	cc -std=c99 -Wall -ledit -lm parsing.o mpc.o -o parsing

parsing.o: parsing.c
	cc -std=c99 -Wall -c parsing.c -o parsing.o

mpc.o: mpc.c
	cc -std=c99 -Wall -c mpc.c -o mpc.o

clean:
	rm parsing.o parsing
