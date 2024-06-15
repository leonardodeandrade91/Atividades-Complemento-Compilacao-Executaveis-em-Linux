#include "Ventilador.h"

bool Ventilador::ligado = false;
int Ventilador::velocidade = 0;

void Ventilador::ligar(int vel) {
    ligado = true;

    if(vel < 1) {
        vel = 1;
    }
    else if(vel > 3) {
        vel = 3;
    }

    velocidade = vel;

    printf("O ventilador está ligado, na velocidade de %d.\n", velocidade);
}

void Ventilador::desligar() {
    velocidade = 0;
    ligado = false;

    cout << "O ventilador está desligado!" << endl;
}

const bool Ventilador::getLigado() {
    return ligado;
}

const int Ventilador::getVelocidade() {
    return velocidade;
}

void Ventilador::setLigado(bool ligado) {
    Ventilador::ligado = ligado;
}

void Ventilador::setVelocidade(int velocidade) {
    Ventilador::velocidade = velocidade;
}
