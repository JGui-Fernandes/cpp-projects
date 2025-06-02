#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template <class C>
class Nodo{

    public:
        Nodo();
        Nodo(C elemento);
        Nodo(C elemento, Nodo* proximo);

        Nodo<C>* getProximo();
        void setProximo(Nodo* proximo);

        C getElemento();
        void setElemento(C elemento);

    private:
        C elemento;

        Nodo* proximo;

};

template <class C>
Nodo<C>::Nodo(){
    proximo = nullptr;
}

template <class C>
Nodo<C>::Nodo(C elemento){
    this->elemento = elemento;
    proximo = nullptr;
}

template <class C>
Nodo<C>::Nodo(C elemento, Nodo* proximo){
    this->elemento = elemento;
    this->proximo = proximo;
}

template <class C>
Nodo<C>* Nodo<C>::getProximo(){
    return proximo;
}

template <class C>
void Nodo<C>::setProximo(Nodo* proximo){
    this->proximo = proximo;
}

template <class C>
C Nodo<C>::getElemento(){
    return elemento;
}

template <class C>
void Nodo<C>::setElemento(C elemento){
    this->elemento = elemento;
}

#endif // NODO_H_INCLUDED
