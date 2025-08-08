all:Main
Main.o:Main.c Carre.h
	gcc -c -Wall Main.c
Carre.o:Carre.c Carre.h
	gcc -c -Wall Carre.c
Main:Main.o Carre.o
	gcc -o Main Main.o Carre.o
clean:
	rm -fr*.o Main

