program2: main.o byLastName.o byClassDay.o byClassNumber.o fillClasses.o
	gcc -o program2 main.o byLastName.o byClassDay.o byClassNumber.o fillClasses.o

main.o: main.c
	gcc -c -Wall main.c

byLastName.o: byLastName.c
	gcc -c -Wall byLastName.c

byClassDay.o: byClassDay.c
	gcc -c -Wall byClassDay.c

byClassNumber.o: byClassNumber.c
	gcc -c -Wall byClassNumber.c

fillClasses.o: fillClasses.c
	gcc -c -Wall fillClasses.c

