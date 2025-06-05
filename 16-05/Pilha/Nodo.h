#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template <class T>
class Nodo{

    public:
        Nodo();
        Nodo(T elemento, Nodo<T>* anterior);
        Nodo(T elemento);

        void setAnterior(Nodo<T>* anterior);
        Nodo<T>* getAnterior();

        void setElemento(T elemento);
        T getElemento();
    private:
        T elemento;
        Nodo<T>* anterior;
};

template <class T>
Nodo<T>::Nodo(){
    anterior = nullptr;
}

template <class T>
Nodo<T>::Nodo(T elemento, Nodo<T>* anterior){
    this->anterior = anterior;
    this->elemento = elemento;
}

template <class T>
Nodo<T>::Nodo(T elemento){
    this->elemento = elemento;
    this->anterior = nullptr;
}

template <class T>
void Nodo<T>::setAnterior(Nodo<T>* anterior){
    this->anterior = anterior;
}

template <class T>
Nodo<T>* Nodo<T>::getAnterior(){
    return anterior;
}

template <class T>
void Nodo<T>::setElemento(T elemento){
    this->elemento = elemento;
}

template <class T>
T Nodo<T>::getElemento(){
    return elemento;
}
#endif // NODO_H_INCLUDED
