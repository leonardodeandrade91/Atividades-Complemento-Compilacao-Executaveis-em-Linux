#ifndef PUBLICACAO_H_INCLUDED
#define PUBLICACAO_H_INCLUDED
#include <iostream>

using namespace std;

class Publicacao {
    public:
        virtual void detalhes() = 0;
        virtual void abrir() = 0;
        virtual void fechar() = 0;
        virtual void folhear(int p) = 0;
        virtual void avancarPag() = 0;
        virtual void voltarPag() = 0;
        virtual ~Publicacao() = 0;
};

#endif // PUBLICACAO_H_INCLUDED
