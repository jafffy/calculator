all: cal.o
	gcc -o cal cal.o

cal.o: cal.c
	gcc -c cal.c

run:
	./cal
