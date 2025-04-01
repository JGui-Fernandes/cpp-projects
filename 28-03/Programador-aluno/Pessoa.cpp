#include "Pessoa.h"

Pessoa::Pessoa(){

}

Pessoa::Pessoa(char* nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

Pessoa::~Pessoa(){

}

void Pessoa::setNome(char* nome){
    this->nome = nome;
}

char* Pessoa::getNome(){
    return nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::imprime_dados(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}
