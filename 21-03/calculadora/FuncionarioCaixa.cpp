#include "FuncionarioCaixa.h"

FuncionarioCaixa::FuncionarioCaixa(){

}
FuncionarioCaixa::FuncionarioCaixa(string nome, string endereco, Calculadora calculadora){
    this->nome = nome;
    this->endereco = endereco;
    this->calculadora = calculadora;
}

void FuncionarioCaixa::setNome(string nome){
    this->nome = nome;
}

void FuncionarioCaixa::setEndereco(string endereco){
    this->endereco = endereco;
}

void FuncionarioCaixa::setCalculadora(Calculadora calculadora){
    this->calculadora = calculadora;
}

string FuncionarioCaixa::getNome(){
    return nome;
}

string FuncionarioCaixa::getEndereco(){
    return endereco;
}

Calculadora FuncionarioCaixa::getCalculadora(){
    return calculadora;
}

float FuncionarioCaixa::soma(float valor1, float valor2){
    return calculadora.soma(valor1, valor2);
}

float FuncionarioCaixa::subtrai(float valor1, float valor2){
    return calculadora.subtrai(valor1, valor2);
}

float FuncionarioCaixa::divide(float valor1, float valor2){
    return calculadora.divide(valor1, valor2);
}

float FuncionarioCaixa::multiplica(float valor1, float valor2){
    return calculadora.multiplica(valor1, valor2);
}

int FuncionarioCaixa::elevaAoQuadrado(int valor){
    return (int) calculadora.elevaAoQuadrado(valor);
}

int FuncionarioCaixa::elevaAoCubo(int valor){
    return (int) calculadora.elevaAoCubo(valor);
}

void FuncionarioCaixa::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;

    cout << "Calculadora: " << endl;
    calculadora.imprime_info();
}
