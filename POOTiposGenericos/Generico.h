#ifndef GENERICO_H_INCLUDED
#define GENERICO_H_INCLUDED

template<class E> class Generico {
    public:
        const E getEntidade();
        void setEntidade(E entidade);
    private:
        E entidade;
};

template<class E> const E Generico<E>::getEntidade() {
    return this->entidade;
}

template<class E> void Generico<E>::setEntidade(E entidade) {
    this->entidade = entidade;
}

#endif // GENERICO_H_INCLUDED
