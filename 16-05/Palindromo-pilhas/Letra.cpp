#include "Letra.h"
#include <iostream>

using namespace std;

Nodo::Nodo(){
    anterior = nullptr;
    proximo = nullptr;
    elemento = '\0';
}

Nodo::Nodo(Nodo* anterior, char elemento){
    this->anterior = anterior;
    this->proximo = nullptr;
    this->elemento = elemento;
}

Nodo::Nodo(Nodo* nodo){
    this->anterior = nodo->getAnterior();
    this->proximo = nodo->getProximo();
    this->elemento = nodo->getElemento();
}

Nodo::Nodo(char elemento){
    this->elemento = elemento;
    anterior = nullptr;
    proximo = nullptr;
}

Nodo* Nodo::getProximo(){
    return proximo;
}

Nodo* Nodo::getAnterior(){
    return anterior;
}

char Nodo::getElemento(){
    return elemento;
}

void Nodo::setProximo(Nodo* proximo){
    this->proximo = proximo;
}

void Nodo::setAnterior(Nodo* anterior){
    this->anterior = anterior;
}

void Nodo::setElemento(char elemento){
    this->elemento = elemento;
}
