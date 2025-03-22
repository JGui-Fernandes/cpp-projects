#include "Competicao.h"

Competicao::Competicao(){

}

Competicao::Competicao(char* nome, Data data){
    this -> nome = nome;
    this -> data = data;
}

char* Competicao::getNome(){
    return nome;
}

Data Competicao::getData(){
    return data;
}

void Competicao::setNome(char* nome){
    this -> nome = nome;
}

void Competicao::setData(Data data){
    this -> data = data;
}

void Competicao::imprime_data(){
    cout << "Nome: " << nome << endl;
    cout << "Data: ";
    data.imprime_data();
}
