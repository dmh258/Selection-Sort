all: a.out

a.out: main.o common.o cal.o
	gcc main.o common.o cal.o -o a.out

main.o: main.c
	gcc -c main.c

common.o: common.c
	gcc -c common.c

cal.o: cal.c
	gcc -c cal.c

clean:
	rm -f *.o a.out