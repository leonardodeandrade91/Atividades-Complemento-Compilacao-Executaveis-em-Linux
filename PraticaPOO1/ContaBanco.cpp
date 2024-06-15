#include "ContaBanco.h"

void ContaBanco::estadoAtual() {
    cout << "-----------------------------------" << endl;
    cout << "Conta: " << this->getNumConta() << endl;
    cout << "Tipo: " << this->getTipo() << endl;
    cout << "Dono: " << this->getDono() << endl;
    cout << "Saldo: " << this->getSaldo() << endl;
    cout << "Status: " << (this->getStatus() ? "true" : "false") << endl;
}

void ContaBanco::abrirConta(string t) {
    this->setTipo(t);
    this->setStatus(true);

    if(!t.compare("CC")) {
        this->setSaldo(50);
    }
    else if(!t.compare("CP")) {
        this->setSaldo(150);
    }

    cout << "Conta aberta com sucesso!" << endl;
}

void ContaBanco::fecharConta() {
    if(this->getSaldo() > 0) {
        cout << "Conta não pode ser fechada porque ainda tem dinheiro!" << endl;
    }
    else if(this->getSaldo() < 0) {
        cout << "Conta não pode ser fechada pois tem débito!" << endl;
    }
    else {
        this->setStatus(false);
        cout << "Conta de " << this->getDono() << " fechada com sucesso!" << endl;
    }
}

void ContaBanco::depositar(float v) {
    if(this->getStatus() == true) {
        this->setSaldo(this->getSaldo() + v);

        cout << "Depósito de R$" << v << " realizado na conta de " << this->getDono() << "!" << endl;
    }
    else {
        cout << "Conta fechada ou inexistente!" << endl;
    }
}

void ContaBanco::sacar(float v) {
    if(this->getStatus() == true) {
        if(this->getSaldo() >= v) {
            this->setSaldo(this->getSaldo() - v);

            cout << "Saque de R$" << v << " realizado na conta de " << this->getDono() << "!" << endl;
        }
        else {
            cout << "Saldo insuficiente para saque!" << endl;
        }
    }
    else {
        cout << "Conta fechada! Impossível sacar!" << endl;
    }
}

void ContaBanco::pagarMensal() {
    int v = 0;

    if(!this->getTipo().compare("CC")) {
        v = 12;
    }
    else if(!this->getTipo().compare("CP")) {
        v = 20;
    }

    if(this->getStatus() == true) {
        this->setSaldo(this->getSaldo() - v);

        cout << "Mensalidade de R$" << v << " debitada da conta de " << this->getDono() << "." << endl;
    }
    else {
        cout << "Não podemos cobrar, problemas na conta!" << endl;
    }
}

ContaBanco::ContaBanco() {
    this->setSaldo(0);
    this->setStatus(false);
}

ContaBanco::~ContaBanco() {
    cout << "Objeto ContaBanco Destruído!" << endl;
}

const int ContaBanco::getNumConta() {
    return this->numConta;
}

const string ContaBanco::getTipo() {
    return this->tipo;
}

const string ContaBanco::getDono() {
    return this->dono;
}

const float ContaBanco::getSaldo() {
    return this->saldo;
}

const bool ContaBanco::getStatus() {
    return this->status;
}

void ContaBanco::setNumConta(int numConta) {
    this->numConta = numConta;
}

void ContaBanco::setTipo(string tipo) {
    this->tipo = tipo;
}

void ContaBanco::setDono(string dono) {
    this->dono = dono;
}

void ContaBanco::setSaldo(float saldo) {
    this->saldo = saldo;
}

void ContaBanco::setStatus(bool status) {
    this->status = status;
}
