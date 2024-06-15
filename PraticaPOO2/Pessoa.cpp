#include "Pessoa.h"

void Pessoa::fazerAniver() {
    this->idade++;
}

Pessoa::Pessoa(string nome, int idade, string sexo) {
    this->nome = nome;
    this->idade = idade;
    this->sexo = sexo;
}

Pessoa::~Pessoa() {
    cout << "Objeto Pessoa Destruído!" << endl;
}

string Pessoa::getNome() {
    return this->nome;
}

int Pessoa::getIdade() {
    return this->idade;
}

string Pessoa::getSexo() {
    return this->sexo;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

void Pessoa::setSexo(string sexo) {
    this->sexo = sexo;
}
