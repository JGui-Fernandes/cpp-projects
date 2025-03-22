#include "Calculadora.h"

Calculadora::Calculadora(){

}
Calculadora::Calculadora(string cor){
    this -> memoria = 0;
    this -> cor = cor;
}

void Calculadora::setMemoria(int memoria){
    this -> memoria = memoria;
}

void Calculadora::setCor(string cor){
    this -> cor = cor;
}

int Calculadora::getMemoria(){
    return memoria;
}

string Calculadora::getCor(){
    return cor;
}

float Calculadora::soma(float valor1, float valor2){
    return valor1 + valor2; 
}

float Calculadora::subtrai(float valor1, float valor2){
    return valor1 - valor2;
}

float Calculadora::divide(float valor1, float valor2){
    return valor1 / valor2;
}

float Calculadora::multiplica(float valor1, float valor2){
    return valor1 * valor2;
}

int Calculadora::elevaAoQuadrado(int valor){
    return (int) multiplica(valor, valor);
}

int Calculadora::elevaAoCubo(int valor){
    memoria = (int) multiplica(valor, valor);
    return (int) multiplica(valor, memoria);
}

void Calculadora::imprime_info(){
    cout << "Memoria: " << memoria << endl;
    cout << "Cor: " << cor << endl;
}