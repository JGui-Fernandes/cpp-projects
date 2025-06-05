#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include "Nodo.h"

using namespace std;

template <class T>
class Pilha{

    public:
        Pilha();
        Pilha(Nodo<T>* topo);

        T top(); // Retorna o topo
        void pop(); // Remove o topo
        void push(T elemento); // Insere no topo

        int getSize();

        void imprime();

    private:
        Nodo<T>* topo;
        int size;
};

template <class T>
Pilha<T>::Pilha(){
    topo = nullptr;
    size = 0;
}

template <class T>
Pilha<T>::Pilha(Nodo<T>* topo){
    this->topo = topo;
    size = 1;
}

template <class T>
T Pilha<T>::top(){
    return topo->getElemento();
}


template <class T>
void Pilha<T>::pop(){
    Nodo<T>* temp = topo;

    topo = topo->getAnterior();

    delete temp;

    size--;
}

template <class T>
void Pilha<T>::push(T elemento){
    Nodo<T>* novo = new Nodo<T>(elemento);

    novo->setAnterior(topo);

    topo = novo;

    size++;
}

template <class T>
int Pilha<T>::getSize(){
    return size;
}

template<class T>
void Pilha<T>::imprime(){
    Nodo<T>* atual = topo;
    while(atual != nullptr){
        cout << atual->getElemento() << endl;
        atual = atual->getAnterior();
    }
}
#endif // PILHA_H_INCLUDED
