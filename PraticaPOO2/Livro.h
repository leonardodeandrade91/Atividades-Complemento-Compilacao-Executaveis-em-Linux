#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED
#include <iostream>
#include "Publicacao.h"
#include "Pessoa.h"

using namespace std;

class Livro : public Publicacao {
    private:
        string titulo;
        string autor;
        int totPaginas;
        int pagAtual;
        bool aberto;
        Pessoa *leitor;

    public:
        void detalhes() override;
        void abrir() override;
        void fechar() override;
        void folhear(int p) override;
        void avancarPag() override;
        void voltarPag() override;

        Livro(string titulo, string autor, int totPaginas, Pessoa *leitor);
        ~Livro();

        const string getTitulo();
        const string getAutor();
        const int getTotPaginas();
        const int getPagAtual();
        const bool getAberto();
        const Pessoa *getLeitor();

        void setTitulo(string titulo);
        void setAutor(string autor);
        void setTotPaginas(int totPaginas);
        void setPagAtual(int pagAtual);
        void setAberto(bool aberto);
        void setLeitor(Pessoa *leitor);
};

#endif // LIVRO_H_INCLUDED
