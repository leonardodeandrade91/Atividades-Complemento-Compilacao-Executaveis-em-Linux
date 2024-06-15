#include <iostream>
#include <clocale>
#include "ContaBanco.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    ContaBanco *p1 = new ContaBanco();
    ContaBanco *p2 = new ContaBanco();

    p1->abrirConta("CC");
    p1->setNumConta(1111);
    p1->setDono("Jubileu");

    p2->abrirConta("CP");
    p2->setNumConta(2222);
    p2->setDono("Creuza");

    p1->depositar(300);
    p2->depositar(500);

    p2->sacar(100);

    p1->pagarMensal();
    p2->pagarMensal();

    p1->estadoAtual();
    p2->estadoAtual();

    delete p1;
    delete p2;

    return 0;
}
