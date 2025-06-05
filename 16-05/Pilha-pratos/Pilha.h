#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include "Nodo.h"

using namespace std;

template<class T>
class Pilha{

    public:
        Pilha();

        void push(T elemento);
        void pop();
        T top();

        void imprime();

        int getSize();
    private:
        Nodo<T>* topo;
        int size;
};

template<class T>
Pilha<T>::Pilha(){
    topo == nullptr;
    size = 0;
}

template<class T>
void Pilha<T>::push(T elemento){
    Nodo<T>* novo = new Nodo<T>(elemento);

    if(size == 0){
        topo = novo;
    }
    else{
        novo->setAnterior(topo);
        topo = novo;
    }

    size++;
}

template<class T>
void Pilha<T>::pop(){
    if(size != 0){
        Nodo<T>* atual = topo;
        topo = topo->getAnterior();

        delete atual;

        size--;
    }
}

template<class T>
T Pilha<T>::top(){
    if(size != 0){
        return topo->getElemento();
    }
    else{
        return nullptr;
    }
}

template<class T>
void Pilha<T>::imprime(){
    Nodo<T>* atual = topo;
    while(atual != nullptr){
        cout << atual->getElemento() << endl;
        atual = atual->getAnterior();

    }
}

template<class T>
int Pilha<T>::getSize(){
    return size;
}
#endif // PILHA_H_INCLUDED
