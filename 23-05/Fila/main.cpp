#include <iostream>
#include "Nodo.h"
#include "Fila.h"

using namespace std;

/*void adicionarFila(Nodo<char>* inicio, Nodo<char>* fim, Nodo<char>* novo){
    if(inicio->getElemento() == ' '){
        inicio = novo;
        fim = novo;
        cout<< "Teste 123: "<< fim->getElemento() << endl;
    }
    else{
        fim->setProximo(novo);

        fim = novo;
    }
}

void imprimeFila(Nodo<char>* inicio){
    Nodo<char>* nodo = inicio;
    cout<< "Teste: "<< inicio->getElemento() << endl;
    while(nodo->getElemento() != ' '){
        cout << "SIM" << endl;
        cout << nodo->getElemento() << endl;
        nodo = nodo->getProximo();
    }

    cout << "OI";
}*/

int main()
{
   Fila<char> fila;
   fila.adicionarFila('A');
   fila.adicionarFila('B');
   fila.adicionarFila('C');

   fila.imprime();

    return 0;
}
