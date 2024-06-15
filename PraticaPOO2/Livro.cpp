#include "Livro.h"

void Livro::detalhes() {
    cout << "Livro " << this->titulo << " escrito por " << this->autor << "." << endl;

    if(this->aberto == true) {
        cout << "O livro está aberto!" << endl;
        cout << "Páginas: " << this->totPaginas << ", página atual " << this->pagAtual << "." << endl;
        cout << "Sendo lido por " << this->leitor->getNome() << "." << endl;
        cout << "De idade de " << this->leitor->getIdade() << " anos." << endl;
        cout << "E de sexo " << this->leitor->getSexo() << "." << endl;
    }
    else {
        cout << "O livro está fechado no momento!" << endl;
    }
}

void Livro::abrir() {
    this->aberto = true;
}

void Livro::fechar() {
    this->aberto = false;
}

void Livro::folhear(int p) {
    if(this->getAberto() == true) {
        if(p > this->totPaginas) {
            this->setPagAtual(this->getTotPaginas());
        }
        else if(p < 0) {
            this->setPagAtual(0);
        }
        else {
            this->pagAtual = p;
        }
    }
}

void Livro::avancarPag() {
    if(this->getAberto() == true) {
        if(this->getPagAtual() < this->getTotPaginas()) {
            this->setPagAtual(this->getPagAtual() + 1);
        }
    }
}

void Livro::voltarPag() {
    if(this->getAberto() == true) {
        if(this->getPagAtual() > 0) {
            this->setPagAtual(this->getPagAtual() - 1);
        }
    }
}

Livro::Livro(string titulo, string autor, int totPaginas, Pessoa *leitor) {
    this->titulo = titulo;
    this->autor = autor;
    this->totPaginas = totPaginas;
    this->leitor = leitor;
    this->pagAtual = 0;
    this->aberto = false;
}

Livro::~Livro() {
    delete this->leitor;

    cout << "Objeto Livro Destruído!" << endl;
}

const string Livro::getTitulo() {
    return this->titulo;
}

const string Livro::getAutor() {
    return this->autor;
}

const int Livro::getTotPaginas() {
    return this->totPaginas;
}

const int Livro::getPagAtual() {
    return this->pagAtual;
}

const bool Livro::getAberto() {
    return this->aberto;
}

const Pessoa *Livro::getLeitor() {
    return this->leitor;
}

void Livro::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Livro::setAutor(string autor) {
    this->autor = autor;
}

void Livro::setTotPaginas(int totPaginas) {
    this->totPaginas = totPaginas;
}

void Livro::setPagAtual(int pagAtual) {
    this->pagAtual = pagAtual;
}

void Livro::setAberto(bool aberto) {
    this->aberto = aberto;
}

void Livro::setLeitor(Pessoa *leitor) {
    this->leitor = leitor;
}
