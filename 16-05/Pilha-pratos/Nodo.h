#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template<class T>
class Nodo{

    public:
        Nodo();
        Nodo(T elemento);
        Nodo(T elemento, Nodo<T>* anterior);

        void setElemento(T elemento);
        T getElemento();

        void setAnterior(Nodo<T>* anterior);
        Nodo<T>* getAnterior();

    private:
        T elemento;
        Nodo<T>* anterior;


};

template<class T>
Nodo<T>::Nodo(){
    this->anterior = nullptr;
}

template<class T>
Nodo<T>::Nodo(T elemento){
    this->elemento = elemento;
    this->anterior = nullptr;
}

template<class T>
Nodo<T>::Nodo(T elemento, Nodo<T>* anterior){
    this->elemento = elemento;
    this->anterior = anterior;
}

template<class T>
void Nodo<T>::setElemento(T elemento){
    this->elemento = elemento;
}

template<class T>
T Nodo<T>::getElemento(){
    return elemento;
}

template<class T>
void Nodo<T>::setAnterior(Nodo<T>* anterior){
    this->anterior = anterior;
}

template<class T>
Nodo<T>* Nodo<T>::getAnterior(){
    return anterior;
}

#endif // NODO_H_INCLUDED
