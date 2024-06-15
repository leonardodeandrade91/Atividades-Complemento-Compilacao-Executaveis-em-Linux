ventilador: main.o ventilador.o
	g++ main.o ventilador.o -o ventilador -no-pie

main.o: main.cpp Ventilador.h
	g++ -c main.cpp -o main.o

ventilador.o: Ventilador.cpp Ventilador.h
	g++ -c Ventilador.cpp -o ventilador.o

clean:
	rm -f *.o