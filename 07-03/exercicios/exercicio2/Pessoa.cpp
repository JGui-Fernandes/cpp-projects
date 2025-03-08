#include "Pessoa.h"

Pessoa::Pessoa(){

}

Pessoa::Pessoa(string novoNome){
    nome = novoNome;
}

Pessoa::Pessoa(string novoNome, int novaIdade, int novaAltura, int novaQtdeIrmaos, string novoEndereco){
    nome = novoNome;
    idade = novaIdade;
    altura = novaAltura;
    qtdeIrmaos = novaQtdeIrmaos;
    endereco = novoEndereco;
}

void Pessoa::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "Quantidade de irmaos: " << qtdeIrmaos << endl;
    cout << "Endereco: " << endereco << endl;
}

bool Pessoa::is_filho_unico(){
    if(qtdeIrmaos == 0){
        cout << "Filho unico!" << endl;
        return true;
    }
    else{
        cout << "Nao eh filho unico!" << endl;
        return false;
    }
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

int Pessoa::getAltura(){
    return altura;
}

int Pessoa::getQtdeIrmaos(){
    return qtdeIrmaos;
}

string Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setNome(string novoNome){
    nome = novoNome;
}

void Pessoa::setIdade(int novaIdade){
    idade = novaIdade;
}

void Pessoa::setAltura(int novaAltura){
    altura = novaAltura;
}

void Pessoa::setQtdeIrmaos(int novaQtdeIrmaos){
    qtdeIrmaos = novaQtdeIrmaos;
}

void Pessoa::setEndereco(string novoEndereco){
    endereco = novoEndereco;
}