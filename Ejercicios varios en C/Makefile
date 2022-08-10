GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c11

CFLAGS = -lm

PROGS = taller_c_project

all: $(PROGS)

taller_c_project:
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) matricial_func.c taller_c_func.c -c
	$(GCC) $(FLAGS) -o $@ $@.o matricial_func.o taller_c_func.o $(CFLAGS)

clean:
	$(RM) *.o $(PROGS)