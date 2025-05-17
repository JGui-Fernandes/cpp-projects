#include <iostream>
#include <stack>

#include "Letra.h"

using namespace std;

stack<Nodo*> invertePilha(stack<Nodo*> pilha){
    stack<Nodo*> nova;
    while(!pilha.empty()){
        Nodo* nodo = pilha.top();

        nova.push(nodo);
        pilha.pop();
    }
    return nova;
}

stack<Nodo*> stringParaPilha(string texto){
    stack<Nodo*> pilha;
    Nodo* nodo;
    for(int i = 0; i < texto.size(); i++){
        nodo = new Nodo(texto[i]);
        pilha.push(nodo);
    }

    return pilha;
}

void imprimePilha(stack<Nodo*> pilha){
    Nodo* nodo = pilha.top();
    while(nodo != nullptr){
        cout << nodo->getElemento();
        nodo = nodo->getAnterior();
    }
    cout << endl;
}

bool comparaPilhas(stack<Nodo*> pi, stack<Nodo*> p){
    while(!pi.empty()){
        if(pi.top()->getElemento() != p.top()->getElemento()){
            cout << "NAO SAO PALINDROMOS!" << endl;
            return 0;
        }
        pi.pop();
        p.pop();
    }
    cout << "SAO PALINDROMOS!" << endl;
    return 1;
}

int main()
{
    string texto;
    stack<Nodo*> palavra;
    stack<Nodo*> nova;

    getline(cin, texto);

    palavra = stringParaPilha(texto);

    nova = invertePilha(palavra);

    comparaPilhas(palavra, nova);

    return 0;
}
