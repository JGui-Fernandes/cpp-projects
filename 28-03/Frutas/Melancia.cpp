#include "Melancia.h"
#include "Fruta.h"

Melancia::Melancia(){

}

Melancia::Melancia(float preco, float precoAdicional, bool epoca) : Fruta(preco) {
    this->precoAdicional = precoAdicional;
    this->epoca = epoca;
}

void Melancia::setPrecoAdicional(float precoAdicional){
    this->precoAdicional = precoAdicional;
}

float Melancia::getPrecoAdicional(){
    return precoAdicional;
}

void Melancia::setEpoca(bool epoca){
    this->epoca = epoca;
}
bool Melancia::isEpoca(){
    return epoca;
}

float Melancia::calcula_preco_final(){
    if(epoca){
        return getPreco();
    }
    else{
        return getPreco()+ precoAdicional;
    }
}
