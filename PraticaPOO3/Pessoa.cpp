#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade, string sexo) {
    this->nome = nome;
    this->idade = idade;
    this->sexo = sexo;
    this->experiencia = 0;
}

Pessoa::~Pessoa() {
    cout << "Objeto Pessoa Destruído!" << endl;
}

string Pessoa::toString() {
    return "Pessoa:\nNome = " + nome + "\nIdade = " + to_string(idade) + "\nSexo = " + sexo + "\nExperiencia = " + to_string(experiencia);
}

const string Pessoa::getNome() {
    return this->nome;
}

const int Pessoa::getIdade() {
    return this->idade;
}

const string Pessoa::getSexo() {
    return this->sexo;
}

const float Pessoa::getExperiencia() {
    return this->experiencia;
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

void Pessoa::setExperiencia(float experiencia) {
    this->experiencia = experiencia;
}
