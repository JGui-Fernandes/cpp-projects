#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

using namespace std;
template <class T>
class Lista
{
    public:
        Lista();

        void adicionarFinalLista(T novo);
        void adicionarInicioLista(T novo);
        void adicionarPosicaoLista(T n, int posicao);
        void imprime();
        //virtual ~Fila();

    protected:

    private:
        Nodo<T> *inicio;
        Nodo<T> *fim;
        int size;
};
template <class T>
Lista<T>::Lista(){
   inicio = nullptr;
   fim = nullptr;
   size = 0;
}

template <class T>
void Lista<T>::adicionarFinalLista(T n){
    Nodo<T> *novo = new Nodo<T>(n);
     if(inicio == nullptr){
        inicio = novo;
        fim = novo;
    }
    else{
        fim->setProximo(novo);
        novo->setAnterior(fim);
        fim = novo;
    }
    size++;
}

template <class T>
void Lista<T>::adicionarInicioLista(T n){
    Nodo<T> *novo = new Nodo<T>(n);
     if(inicio == nullptr){
        inicio = novo;
        fim = novo;
    }
    else{
        inicio->setAnterior(novo);
        novo->setProximo(inicio);
        inicio = novo;
    }
    size++;
}

template <class T>
void Lista<T>::adicionarPosicaoLista(T n, int posicao){
    Nodo<T> *novo = new Nodo<T>(n);
    if(posicao < 0 || posicao > size){
        cout << "Posicao inexistente" << endl;
    }
    else if(inicio == nullptr){
        inicio = novo;
        fim = novo;
    }
    else if(posicao == size){
        adicionarFinalLista(n);
    }
    else if(posicao == 0){
        adicionarInicioLista(n);
    }
    else{
        Nodo<T> *atual = inicio;
        for(int i = 0; i < posicao ; i++){
            atual = atual->getProximo();
        }
        Nodo<T> *anterior = atual->getAnterior();

        anterior->setProximo(novo);
        novo->setAnterior(anterior);
        novo->setProximo(atual);
        atual->setAnterior(novo);
        atual = novo;
        size++;
    }
}

template <class T>
void Lista<T>::imprime(){
    Nodo<T>* nodo = inicio;
    while(nodo != nullptr){
        cout << nodo->getElemento() << endl;
        nodo = nodo->getProximo();
    }

}


#endif // LISTA_H


#endif // LISTA_H_INCLUDED
