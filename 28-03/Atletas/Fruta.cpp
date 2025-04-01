#include "Fruta.h"

Fruta::Fruta(){

}
Fruta::Fruta(float preco){
    this->preco = preco;
}

Fruta::~Fruta(){

}

void Fruta::setPreco(float preco){
    this->preco = preco;
}

float Fruta::getPreco(){
    return preco;
}

float Fruta::calcula_preco(float imposto){
    return preco + (imposto * preco);
}
