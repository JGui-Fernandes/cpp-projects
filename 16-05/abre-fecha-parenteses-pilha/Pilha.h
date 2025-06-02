#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include "Nodo.h"

using namespace std;

template <class T>
class Pilha{

    public:
        Pilha();
        void push(T elemento);
        void pop();
        T top();

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
void Pilha<T>::push(T elemento){
    Nodo<T>* novo = new Nodo<T>(elemento);

    novo->setProximo(topo);

    topo = novo;
    size++;
}

template <class T>
void Pilha<T>::pop(){
    if(topo != nullptr){
        Nodo<T>* temp = topo;
        topo = topo->getProximo();

        delete temp;
        size--;
    }
}


template <class T>
T Pilha<T>::top(){
    if(topo != nullptr){
        return topo->getElemento();
    }
}

template <class T>
int Pilha<T>::getSize(){
    return size;
}

template <class T>
void Pilha<T>::imprime(){
    Nodo<T>* atual = topo;
    while(atual != nullptr){
        cout << atual->getElemento() << endl;
        atual = atual->getProximo();
    }
}

#endif // PILHA_H_INCLUDED
