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

        void adicionarFila(char novo);
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
}

template <class T>
void Fila<T>::adicionarFila(char n){
    Nodo<T> *novo = new Nodo<T>(n);
     if(inicio == nullptr){
        inicio = novo;
        fim = novo;
    }
    else{

        fim->setProximo(novo);
        fim = novo;
    }
}
template <class T>
void Fila<T>::imprime(){
    Nodo<char>* nodo = inicio;
    cout<< "Teste: "<< inicio->getElemento() << endl;
    while(nodo != nullptr){
        cout << "SIM" << endl;
        cout << nodo->getElemento() << endl;
        nodo = nodo->getProximo();
    }

    cout << "OI";
}


#endif // FILA_H


#endif // FILA_H_INCLUDED
