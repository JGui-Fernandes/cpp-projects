#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Nodo.h"

using namespace std;

class Lista{

    public:
        Lista();
        Lista(int valor, char nome);

        void adicionarFim(int valor, char nome);
        void adicionarInicio(int valor, char nome);

        void adicionarPosicao(int valor, char nome, int posicao);

        void imprime();

        int getTamanho();

        Nodo* getInicio();

    private:
        Nodo* inicio;
        Nodo* fim;
        int tamanho;
};

Lista::Lista(){
    tamanho = 0;
    inicio = nullptr;
    fim = nullptr;
}

Lista::Lista(int valor, char nome){
    Nodo* novo = new Nodo(valor, nome);
    tamanho = 1;
    inicio = novo;
    fim = novo;
}

void Lista::adicionarFim(int valor, char nome){
    Nodo* novo = new Nodo(valor, nome);

    if(tamanho == 0){
        inicio = novo;
        fim = novo;
    }
    else{
        fim->setProximo(novo);
        novo->setAnterior(fim);

        fim = novo;
    }
    tamanho++;
}

void Lista::adicionarInicio(int valor, char nome){
    Nodo* novo = new Nodo(valor, nome);

    if(tamanho == 0){
        inicio = novo;
        fim = novo;
    }
    else{
        inicio->setAnterior(novo);
        novo->setProximo(inicio);
        inicio = novo;
    }
    tamanho++;
}

void Lista::adicionarPosicao(int valor, char nome, int posicao){
    Nodo* novo = new Nodo(valor, nome);

    if(posicao > tamanho || posicao < 0){
        cout << "Posicao invalida!" << endl;
    }
    else if(tamanho == 0){
        inicio = novo;
        fim = novo;
    }
    else if(posicao == 0){
        adicionarInicio(valor, nome);
    }
    else if(posicao == tamanho){
        adicionarFim(valor, nome);
    }
    else{
        Nodo* atual = inicio;
        for(int i = 0; i < posicao; i++){
            atual = atual->getProximo();
        }
        Nodo* anterior = atual->getAnterior();

        anterior->setProximo(novo);
        atual->setAnterior(novo);
        novo->setAnterior(anterior);
        novo->setProximo(atual);

        tamanho++;
    }
}

void Lista::imprime(){
    Nodo* atual = inicio;
    while(atual != nullptr){
        cout << "Nome: " << atual->getNome() << "  |  Iniciativa: " << atual->getValor() << endl;
        atual = atual->getProximo();
    }
}

int Lista::getTamanho(){
    return tamanho;
}

Nodo* Lista::getInicio(){
    return inicio;
}

#endif // LISTA_H_INCLUDED
