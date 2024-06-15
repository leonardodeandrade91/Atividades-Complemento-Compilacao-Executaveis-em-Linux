#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
#include <iostream>
#include <cstring>
#include "AcoesVideo.h"

using namespace std;

class Video : public AcoesVideo {
    private:
        string titulo;
        int avaliacao;
        int views;
        int curtidas;
        bool reproduzindo;

    public:
        void play() override;
        void pause() override;
        void like() override;

        Video(string titulo);
        ~Video();

        string toString();

        const string getTitulo();
        const int getAvaliacao();
        const int getViews();
        const int getCurtidas();
        const bool getReproduzindo();

        void setTitulo(string titulo);
        void setAvaliacao(int avaliacao);
        void setViews(int views);
        void setCurtidas(int curtidas);
        void setReproduzindo(bool reproduzindo);
};

#endif // VIDEO_H_INCLUDED
