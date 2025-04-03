#include <iostream>
#include <string.h>
#include <iomanip>
#include "Pais.h"

Pais::Pais(){
    this->quantidadeFronteira = 0;
}

Pais::Pais(char *iso, char *nome, float dimensao){
    this->iso = iso;
    this->nome = nome;
    this->dimensao = dimensao;
    this->quantidadeFronteira = 0;
}

char* Pais::getIso(){
    return iso;
}

void Pais::setIso(char *iso){
    this->iso = iso;
}

char* Pais::getNome(){
    return nome;
}

void Pais::setNome(char *nome){
    this->nome = nome;
}

int Pais::getPopulacao(){
    return populacao;
}

void Pais::setPopulacao(int populacao){
    this->populacao = populacao;
}

float Pais::getDimensao(){
    return dimensao;
}

void Pais::setDimensao(float dimensao){
    this->dimensao = dimensao;
}

void Pais::adicionaFronteira(Pais& pais){
    if(!verificaFronteira(pais)){
        fronteira[quantidadeFronteira] = &pais;
        quantidadeFronteira++;
    }
    if (!pais.verificaFronteira(*this)) {
        pais.adicionaFronteira(*this);
    }
}

bool Pais::verificaPaisesIguais(Pais& pais){
    if(strcmp(this->iso, pais.iso) == 0){
        return true;
    }
    return false;
}

bool Pais::verificaFronteira(Pais& pais){
    for(int i = 0; i < this->quantidadeFronteira; i++){
        if(this->fronteira[i]->verificaPaisesIguais(pais)){
            return true;
        }
    }
    return false;
}

float Pais::getDensidade(){
    return populacao/dimensao;
}

void Pais::comparaFronteiras(Pais& pais) {
    int cont = 0;
    for (int i = 0; i < quantidadeFronteira; i++) {
        for (int k = 0; k < pais.quantidadeFronteira; k++) {
            if (fronteira[i]->verificaPaisesIguais(*pais.fronteira[k])) {
                fronteira[i]->imprimeInfo();
                cont++;
            }
        }
    }
    if(cont == 0){
        cout << "Nenhuma fronteira igual registrada\n" << endl;
    }
}

void Pais::imprimeInfo(){
    cout << fixed << setprecision(2);
    cout << "Nome: " << nome;
    cout << " - ISO: " << iso;
    cout << " - Dimensao: " << dimensao << "\n" << endl;
}

void Pais::imprimeFronteiras(){
    if(quantidadeFronteira == 0){
        cout << "Nenhuma fronteira registrada\n" << endl;
    }
    else{
        for(int i = 0; i < quantidadeFronteira; i++){
            fronteira[i]->imprimeInfo();
        }
    }

}
