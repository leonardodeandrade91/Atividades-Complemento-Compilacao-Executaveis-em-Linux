biblioteca: main.o pessoa.o publicacao.o livro.o
	g++ main.o pessoa.o publicacao.o livro.o -o biblioteca -no-pie

main.o: main.cpp Pessoa.h Publicacao.h Livro.h
	g++ -c main.cpp -o main.o

livro.o: Livro.cpp Livro.h
	g++ -c Livro.cpp -o livro.o

publicacao.o: Publicacao.cpp Publicacao.h
	g++ -c Publicacao.cpp -o publicacao.o

pessoa.o: Pessoa.cpp Pessoa.h
	g++ -c Pessoa.cpp -o pessoa.o

clean:
	rm -f *.o