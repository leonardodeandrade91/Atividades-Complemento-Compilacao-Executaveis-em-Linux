#include <iostream>
#include <clocale>
#include "Pessoa.h"
#include "Publicacao.h"
#include "Livro.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    Pessoa *p[2];
    Publicacao *l[3];

    p[0] = new Pessoa("Sérgio", 22, "M");
    p[1] = new Pessoa("Maria", 31, "F");

    l[0] = new Livro("C++ Básico", "José da Silva", 300, p[0]);
    l[1] = new Livro("POO com C++", "Maria de Souza", 500, p[0]);
    l[2] = new Livro("C++ Avançado", "Ana Paula", 800, p[1]);

    l[2]->abrir();
    l[2]->folhear(305);
    l[2]->avancarPag();
    l[2]->detalhes();

    delete *p;
    delete *l;

    return 0;
}
