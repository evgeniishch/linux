CC=g++
CFLAGS=-I.
DEPS = functions.h
OBJ = main.o readline.o kolvo.o



%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

MyProg: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *o polyndrom
