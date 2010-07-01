CC=gcc
CFLAGS=-Wall -lncurses
OBJS=rubicSolver.o main.o

rubicSolver: $(OBJS)
	$(CC) $(CFLAGS) -o rubicSolver $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

rubicSolver.o: rubicSolver.c
	$(CC) $(CFLAGS) -c rubicSolver.c -o rubicSolver.o

run:
	./rubicSolver

clean:
	rm rubicSolver *.o
