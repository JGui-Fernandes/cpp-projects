#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED


template <class T>
class Nodo{

    public:
        Nodo();
        Nodo(T elemento);
        Nodo(T elemento, Nodo* proximo);

        void setElemento(T elemento);
        T getElemento();

        void setProximo(Nodo* proximo);
        Nodo* getProximo();

    private:
        T elemento;
        Nodo* proximo;
};

template <class T>
Nodo<T>::Nodo(){
    this->proximo = nullptr;
}

template <class T>
Nodo<T>::Nodo(T elemento){
    this->elemento = elemento;
    this->proximo = nullptr;
}

template <class T>
Nodo<T>::Nodo(T elemento, Nodo* proximo){
    this->elemento = elemento;
    this->proximo = proximo;
}

template <class T>
void Nodo<T>::setElemento(T elemento){
    this->elemento = elemento;
}

template <class T>
T Nodo<T>::getElemento(){
    return elemento;
}

template <class T>
void Nodo<T>::setProximo(Nodo* proximo){
    this->proximo = proximo;
}

template <class T>
Nodo<T>* Nodo<T>::getProximo(){
    return proximo;
}

#endif // NODO_H_INCLUDED
