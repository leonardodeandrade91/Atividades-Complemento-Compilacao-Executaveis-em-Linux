#ifndef VISUALIZACAO_H_INCLUDED
#define VISUALIZACAO_H_INCLUDED
#include <iostream>
#include <cstring>
#include "Gafanhoto.h"
#include "Video.h"

using namespace std;

class Visualizacao {
    private:
        Gafanhoto *espectador;
        Video *filme;

    public:
        void avaliar();
        void avaliar(int nota);
        void avaliar(float porc);

        string toString();

        Visualizacao(Gafanhoto *espectador, Video *filme);
        ~Visualizacao();

        const Gafanhoto *getEspectador();
        const Video *getFilme();

        void setEspectador(Gafanhoto *espectador);
        void setFilme(Video *filme);
};

#endif // VISUALIZACAO_H_INCLUDED
