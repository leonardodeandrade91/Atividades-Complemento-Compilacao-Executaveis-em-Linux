banco: main.o contabanco.o
	g++ main.o contabanco.o -o banco -no-pie

main.o: main.cpp ContaBanco.h
	g++ -c main.cpp -o main.o

contabanco.o: ContaBanco.cpp ContaBanco.h
	g++ -c ContaBanco.cpp -o contabanco.o

clean:
	rm -f *.o