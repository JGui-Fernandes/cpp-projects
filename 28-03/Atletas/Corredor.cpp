#include "Corredor.h"
#include "Atleta.h"
#include "Competicao.h"

Corredor::Corredor(){

}

Corredor::Corredor(char* nome, int idade, int peso, Competicao competicao): Atleta(nome, idade){
    this->peso = peso;
    this-> competicao = competicao;
}

void Corredor::imprime_competicao(){
    competicao.imprime_data();
}

void Corredor::imprime_info(){
    Atleta::teste();
    cout << "Peso: " << peso << endl;
    cout << "Competicao: " << endl;
    competicao.imprime_data();
}

int Corredor::getPeso(){
    return peso;
}

Competicao Corredor::getCompeticao(){
    return competicao;
}

void Corredor::setPeso(int peso){
    this->peso = peso;
}

void Corredor::setCompeticao(Competicao competicao){
    this->competicao = competicao;
}
