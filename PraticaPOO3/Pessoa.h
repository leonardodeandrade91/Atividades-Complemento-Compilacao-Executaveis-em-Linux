#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>
#include <cstring>

using namespace std;

class Pessoa {
    protected:
        string nome;
        int idade;
        string sexo;
        float experiencia;

    public:
        Pessoa(string nome, int idade, string sexo);
        virtual ~Pessoa() = 0;

        virtual string toString();

        const string getNome();
        const int getIdade();
        const string getSexo();
        const float getExperiencia();

        void setNome(string nome);
        void setIdade(int idade);
        void setSexo(string sexo);
        void setExperiencia(float experiencia);
};

#endif // PESSOA_H_INCLUDED
