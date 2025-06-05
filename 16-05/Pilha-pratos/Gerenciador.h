#ifndef GERENCIADOR_H_INCLUDED
#define GERENCIADOR_H_INCLUDED


#include <cstdlib>
#include <ctime>  

#include "Pilha.h"

template<class T>
class Gerenciador {
    public:
        void simular(int turnos, Pilha<T>* lavados, Pilha<T>* secos);

        void simularTurno(Pilha<T>* lavados, Pilha<T>* secos);
    private:
        int sortearValor(int maximo);
};

template<class T>
void Gerenciador<T>::simular(int turnos, Pilha<T>* lavados, Pilha<T>* secos){
    for(int i = 0; i < turnos; i++){
        simularTurno(lavados, secos);
    }
}

template<class T>
int Gerenciador<T>::sortearValor(int maximo){
    int numero = rand() % maximo + 1;

    return numero;
}

template<class T>
void Gerenciador<T>::simularTurno(Pilha<T>* lavados, Pilha<T>* secos){
    int sorteadoLavar = sortearValor(5);
    int sorteadoSecar = sortearValor(3);

    if(sorteadoSecar > sorteadoLavar){
        sorteadoSecar = sorteadoLavar;
    }

    for(int i = 0; i < sorteadoLavar; i++){
        lavados->push(i);
    }

    for(int i = 0; i < sorteadoSecar; i++){
        secos->push(i);
    }

    //cout << "Lavados: " << sorteadoLavar << " Secos: " << sorteadoSecar << endl;
}

#endif // GERENCIADOR_H_INCLUDED
