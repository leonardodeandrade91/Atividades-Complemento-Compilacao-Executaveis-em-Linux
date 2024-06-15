#include "Video.h"

void Video::play() {
    this->reproduzindo = true;
}

void Video::pause() {
    this->reproduzindo = false;
}

void Video::like() {
    this->curtidas++;
}

Video::Video(string titulo) {
    this->titulo = titulo;
    this->avaliacao = 1;
    this->views = 0;
    this->curtidas = 0;
    this->reproduzindo = false;
}

Video::~Video() {
    cout << "Objeto Video Destruído!" << endl;
}

string Video::toString() {
    return "Video:\nTitulo = " + titulo + "\nAvaliacao = " + to_string(avaliacao) + "\nViews = " + to_string(views) + "\nCurtidas = " + to_string(curtidas) + "\nReproduzindo = " + (reproduzindo ? "true" : "false");
}

const string Video::getTitulo() {
    return this->titulo;
}

const int Video::getAvaliacao() {
    return this->avaliacao;
}

const int Video::getViews() {
    return this->views;
}

const int Video::getCurtidas() {
    return this->curtidas;
}

const bool Video::getReproduzindo() {
    return this->reproduzindo;
}

void Video::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Video::setAvaliacao(int avaliacao) {
    int media;
    media = (int)(this->avaliacao + avaliacao) / this->views;
    this->avaliacao = media;
}

void Video::setViews(int views) {
    this->views = views;
}

void Video::setCurtidas(int curtidas) {
    this->curtidas = curtidas;
}

void Video::setReproduzindo(bool reproduzindo) {
    this->reproduzindo = reproduzindo;
}
