#include "Banana.h"
#include "Fruta.h"

Banana::Banana(){

}

Banana::Banana(float preco, char* tipo):Fruta(preco){
    this->tipo = tipo;
}

void Banana::setTipo(char* tipo){
    this->tipo = tipo;
}

char* Banana::getTipo(){
    return tipo;
}
