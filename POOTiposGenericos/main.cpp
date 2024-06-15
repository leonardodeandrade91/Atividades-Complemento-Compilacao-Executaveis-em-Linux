#include <iostream>
#include <clocale>
#include "Generico.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    Generico<string> *texto = new Generico<string>();

    texto->setEntidade("Exemplo de String!");

    cout << texto->getEntidade() << endl;

    Generico<int> *numero = new Generico<int>();

    numero->setEntidade(50);

    cout << numero->getEntidade() << endl;

    delete texto;
    delete numero;

    return 0;
}
