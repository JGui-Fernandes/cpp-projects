#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#ifndef FILA_H
#define FILA_H
#include "Nodo.h"

using namespace std;
template <class T>
class Fila
{
    public:
        Fila();

        void adicionarFila(T novo);
        void atenderFila();
        void imprime();
        //virtual ~Fila();

    protected:

    private:
        Nodo<T> *inicio;
        Nodo<T> *fim;
        int size;
};
template <class T>
Fila<T>::Fila(){
   inicio = nullptr;
   fim = nullptr;
   size = 0;
}

template <class T>
void Fila<T>::adicionarFila(T n){
    Nodo<T> *novo = new Nodo<T>(n);
     if(inicio == nullptr){
        inicio = novo;
        fim = novo;
    }
    else{

        fim->setProximo(novo);
        fim = novo;
    }

    size++;
}
template <class T>
void Fila<T>::imprime(){
    Nodo<char>* nodo = inicio;
    while(nodo != nullptr){
        cout << nodo->getElemento() << endl;
        nodo = nodo->getProximo();
    }
}

template<class T>
void Fila<T>::atenderFila(){
    Nodo<T>* atual = inicio;

    inicio = inicio->getProximo();

    delete atual;

    size--;
}


#endif // FILA_H


#endif // FILA_H_INCLUDED
