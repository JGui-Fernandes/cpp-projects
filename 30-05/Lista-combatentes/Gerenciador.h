#ifndef GERENCIADOR_H_INCLUDED
#define GERENCIADOR_H_INCLUDED

#include "Lista.h"


#include <cstdlib>
#include <ctime>  

class Gerenciador{

    public:
        Gerenciador();

        void organizar(Lista* lista);

    private:
        int sortearValor(int maximo);
};

Gerenciador::Gerenciador(){

}

void Gerenciador::organizar(Lista* lista) {
    Nodo* atual;
    char c = 'A';

    for (int i = 0; i < 10; i++) {
        atual = lista->getInicio();
        int valor = sortearValor(10);
        cout << "Numero: " << valor << endl;

        if (lista->getTamanho() == 0) {
            lista->adicionarInicio(valor, c);
        } else {
            int pos = 0;
            while (atual != nullptr && valor <= atual->getValor()) {
                pos++;
                atual = atual->getProximo();
            }
            lista->adicionarPosicao(valor, c, pos);
        }
        c++;
    }
}

int Gerenciador::sortearValor(int maximo){
    int numero = rand() % maximo + 1;

    return numero;
}

#endif // GERENCIADOR_H_INCLUDED
