#include "Programador.h"
#include "Pessoa.h"

Programador::Programador(){

}

Programador::Programador(char* nome, int idade, char* linguagem):Pessoa(nome, idade){
    this->linguagem = linguagem;
}

Programador::~Programador(){

}

void Programador::setLinguagem(char* linguagem){
    this->linguagem = linguagem;
}

char* Programador::getLinguagem(){
    return linguagem;
}

void Programador::imprime_dados(){
    Pessoa::imprime_dados();
    cout << "Linguagem: " << linguagem << endl;
    cout << "\n" << endl;
}
