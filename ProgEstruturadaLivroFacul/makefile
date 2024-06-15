estruturada: estruturada.o
	gcc estruturada.o -o estruturada -no-pie

estruturada.o: main.c
	gcc -c main.c -o estruturada.o

clean:
	rm -f *.o