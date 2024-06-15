#include "Gafanhoto.h"

void Gafanhoto::assistirMaisUm() {
    this->totAssistido++;
}

string Gafanhoto::toString() {
    return "Gafanhoto:\n" + Pessoa::toString() + "\nLogin = " + login + "\nTotAssistido = " + to_string(totAssistido) + "\n";
}

Gafanhoto::Gafanhoto(string nome, int idade, string sexo, string login) : Pessoa(nome, idade, sexo) {
    this->login = login;
    this->totAssistido = 0;
}

Gafanhoto::~Gafanhoto() {
    cout << "Objeto Gafanhoto Destruído!" << endl;
}

const string Gafanhoto::getLogin() {
    return this->login;
}

const int Gafanhoto::getTotAssistido() {
    return this->totAssistido;
}

void Gafanhoto::setLogin(string login) {
    this->login = login;
}

void Gafanhoto::setTotAssistido(int totAssistido) {
    this->totAssistido = totAssistido;
}
