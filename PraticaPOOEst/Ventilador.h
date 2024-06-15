#ifndef VENTILADOR_H_INCLUDED
#define VENTILADOR_H_INCLUDED
#include <iostream>
#include <cstdio>

using namespace std;

class Ventilador {
    private:
        static bool ligado;
        static int velocidade;
    public:
        static void ligar(int vel);
        static void desligar();

        const static bool getLigado();
        const static int getVelocidade();

        static void setLigado(bool ligado);
        static void setVelocidade(int velocidade);
};

#endif // VENTILADOR_H_INCLUDED
