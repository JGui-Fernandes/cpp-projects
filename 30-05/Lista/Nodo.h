#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template <class T>
class Nodo{

    public:
        Nodo();
        Nodo(T elemento);
        Nodo(T elemento, Nodo* proximo);

        Nodo<T>* getProximo();
        void setProximo(Nodo* proximo);

        Nodo<T>* getAnterior();
        void setAnterior(Nodo* anterior);

        T getElemento();
        void setElemento(T elemento);

    private:
        T elemento;

        Nodo* proximo;
        Nodo* anterior;

};

template <class T>
Nodo<T>::Nodo(){
    proximo = nullptr;
    anterior = nullptr;
}

template <class T>
Nodo<T>::Nodo(T elemento){
    this->elemento = elemento;
    proximo = nullptr;
    anterior = nullptr;
}

template <class T>
Nodo<T>::Nodo(T elemento, Nodo* proximo){
    this->elemento = elemento;
    this->proximo = proximo;
}

template <class T>
Nodo<T>* Nodo<T>::getProximo(){
    return proximo;
}

template <class C>
void Nodo<C>::setProximo(Nodo* proximo){
    this->proximo = proximo;
}

template <class T>
Nodo<T>* Nodo<T>::getAnterior(){
    return anterior;
}

template <class C>
void Nodo<C>::setAnterior(Nodo* anterior){
    this->anterior = anterior;
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
