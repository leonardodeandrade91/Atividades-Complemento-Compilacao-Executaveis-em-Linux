#ifndef CONTABANCO_H_INCLUDED
#define CONTABANCO_H_INCLUDED
#include <iostream>

using namespace std;

class ContaBanco {
    public:
        int numConta;

        void estadoAtual();
        void abrirConta(string t);
        void fecharConta();
        void depositar(float v);
        void sacar(float v);
        void pagarMensal();

        ContaBanco();
        ~ContaBanco();

        const int getNumConta();
        const string getTipo();
        const string getDono();
        const float getSaldo();
        const bool getStatus();

        void setNumConta(int numConta);
        void setTipo(string tipo);
        void setDono(string dono);
        void setSaldo(float saldo);
        void setStatus(bool status);
    protected:
        string tipo;

    private:
        string dono;
        float saldo;
        bool status;
};

#endif // CONTABANCO_H_INCLUDED
