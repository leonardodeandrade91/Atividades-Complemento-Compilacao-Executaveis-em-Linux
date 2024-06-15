#include "Visualizacao.h"

void Visualizacao::avaliar() {
    this->filme->setAvaliacao(5);
}

void Visualizacao::avaliar(int nota) {
    this->filme->setAvaliacao(nota);
}

void Visualizacao::avaliar(float porc) {
    int nova = 0;

    if(porc <= 20) {
        nova = 3;
    }
    else if(porc > 20 && porc <= 50) {
        nova = 5;
    }
    else if(porc > 50 && porc <= 90) {
        nova = 8;
    }
    else {
        nova = 10;
    }

    this->filme->setAvaliacao(nova);
}

string Visualizacao::toString() {
    return "Visualização:\nEspectador = " + espectador->toString() + "\nFilme = " + filme->toString() + "\n";
}

Visualizacao::Visualizacao(Gafanhoto *espectador, Video *filme) {
    this->espectador = espectador;
    this->filme = filme;
    this->filme->setViews(this->filme->getViews() + 1);
    this->espectador->setTotAssistido(this->espectador->getTotAssistido() + 1);
}

Visualizacao::~Visualizacao() {
    delete espectador;
    delete filme;

    cout << "Objeto Visualizacao Destruído!" << endl;
}

const Gafanhoto *Visualizacao::getEspectador() {
    return this->espectador;
}

const Video *Visualizacao::getFilme() {
    return this->filme;
}

void Visualizacao::setEspectador(Gafanhoto *espectador) {
    this->espectador = espectador;
}

void Visualizacao::setFilme(Video *filme) {
    this->filme = filme;
}
