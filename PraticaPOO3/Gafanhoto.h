#ifndef GAFANHOTO_H_INCLUDED
#define GAFANHOTO_H_INCLUDED
#include <iostream>
#include <cstring>
#include "Pessoa.h"

using namespace std;

class Gafanhoto : public Pessoa {
    private:
        string login;
        int totAssistido;

    public:
        void assistirMaisUm();

        string toString() override;

        Gafanhoto(string nome, int idade, string sexo, string login);
        ~Gafanhoto();

        const string getLogin();
        const int getTotAssistido();

        void setLogin(string login);
        void setTotAssistido(int totAssistido);
};

#endif // GAFANHOTO_H_INCLUDED
