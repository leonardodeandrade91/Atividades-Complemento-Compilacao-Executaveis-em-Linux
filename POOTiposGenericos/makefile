generalizado: main.o generico.o
	g++ main.o generico.o -o generalizado -no-pie

main.o: main.cpp Generico.h
	g++ -c main.cpp -o main.o

generico.o: Generico.cpp Generico.h
	g++ -c Generico.cpp -o generico.o

clean:
	rm -f *.o