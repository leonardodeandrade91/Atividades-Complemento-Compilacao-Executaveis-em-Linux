youtube: main.o acoesvideo.o video.o pessoa.o gafanhoto.o visualizacao.o
	g++ main.o acoesvideo.o video.o pessoa.o gafanhoto.o visualizacao.o -o youtube -no-pie

main.o: main.cpp AcoesVideo.h Video.h Pessoa.h Gafanhoto.h Visualizacao.h
	g++ -c main.cpp -o main.o

visualizacao.o: Visualizacao.cpp Visualizacao.h
	g++ -c Visualizacao.cpp -o visualizacao.o

gafanhoto.o: Gafanhoto.cpp Gafanhoto.h
	g++ -c Gafanhoto.cpp -o gafanhoto.o

pessoa.o: Pessoa.cpp Pessoa.h
	g++ -c Pessoa.cpp -o pessoa.o

video.o: Video.cpp Video.h
	g++ -c Video.cpp -o video.o

acoesvideo.o: AcoesVideo.cpp AcoesVideo.h
	g++ -c AcoesVideo.cpp -o acoesvideo.o

clean:
	rm -f *.o