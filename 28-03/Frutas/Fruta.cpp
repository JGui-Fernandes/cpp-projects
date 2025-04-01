#pragma once

#include "Fruta.h"

Fruta::Fruta(){

}
Fruta::Fruta(float preco){
    this->preco = preco;
}

void Fruta::setPreco(float preco){
    this->preco = preco;
}

float Fruta::getPreco(){
    return preco;
}

float Fruta::calcula_preco(float imposto){
    return preco + (preco * (imposto / 100));
}
