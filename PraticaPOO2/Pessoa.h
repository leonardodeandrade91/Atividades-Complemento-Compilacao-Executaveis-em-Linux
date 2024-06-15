#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        string sexo;

    public:
        void fazerAniver();

        Pessoa(string nome, int idade, string sexo);
        ~Pessoa();

        string getNome();
        int getIdade();
        string getSexo();

        void setNome(string nome);
        void setIdade(int idade);
        void setSexo(string sexo);
};

#endif // PESSOA_H_INCLUDED
