
#include "Empresa.h"

Empresa::Empresa(){

}
Empresa::Empresa(string nome, FuncionarioCaixa funcionario1, FuncionarioCaixa funcionario2){
    this->nome = nome;
    this->funcionario1 = funcionario1;
    this->funcionario2 = funcionario2;
}

void Empresa::setNome(string nome){
    this->nome = nome;
}

void Empresa::setFuncionario1(FuncionarioCaixa funcionario1){
    this->funcionario1 = funcionario1;
}

void Empresa::setFuncionario2(FuncionarioCaixa funcionario2){
    this->funcionario2 = funcionario2;
}

string Empresa::getNome(){
    return nome;
}

FuncionarioCaixa Empresa::getFuncionario1(){
    return funcionario1;
}

FuncionarioCaixa Empresa::getFuncionario2(){
    return funcionario2;
}

void Empresa::imprime_info(){
    cout << "Nome: " << nome << endl;

    cout << "Funcionario 1: " << endl;
    funcionario1.imprime_info();
    cout << endl;

    cout << "Funcionario 2: " << endl;
    funcionario2.imprime_info();
    cout << endl;
}
