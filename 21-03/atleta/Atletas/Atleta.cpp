#pragma once

#include "Atleta.h"

Atleta::Atleta(){

}

Atleta::Atleta(char* nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

int Atleta::getIdade(){
    return this->idade;
}

char* Atleta::getNome(){
    return this-> nome;
}

void Atleta::setIdade(int idade){
    this ->idade = idade;
}

void Atleta::setNome(char* nome){
    this->nome = nome;
}

void Atleta::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}
